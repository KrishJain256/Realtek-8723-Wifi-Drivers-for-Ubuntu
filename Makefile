KVER  ?= $(if $(KERNELRELEASE),$(KERNELRELEASE),$(shell uname -r))
KSRC := /lib/modules/$(KVER)/build
FIRMWAREDIR := /lib/firmware/
PWD := $(shell pwd)
CLR_MODULE_FILES := *.mod.c *.mod *.o .*.cmd *.ko *~ .tmp_versions* modules.order Module.symvers
SYMBOL_FILE := Module.symvers
# Handle the move of the entire rtlwifi tree
ifneq ("","$(wildcard /lib/modules/$(KVER)/kernel/drivers/net/wireless/realtek)")
MODDESTDIR := /lib/modules/$(KVER)/kernel/drivers/net/wireless/realtek/rtlwifi
else
MODDESTDIR := /lib/modules/$(KVER)/kernel/drivers/net/wireless/rtlwifi
endif
#Handle the compression option for modules in 3.18+
ifneq ("","$(wildcard $(MODDESTDIR)/*.ko.gz)")
COMPRESS_GZIP := y
endif
ifneq ("","$(wildcard $(MODDESTDIR)/*.ko.xz)")
COMPRESS_XZ := y
endif

EXTRA_CFLAGS += -O2
obj-m := rtlwifi.o
rtlwifi-objs	:=	\
		base.o	\
		cam.o	\
		core.o	\
		debug.o	\
		efuse.o	\
		ps.o	\
		rc.o	\
		regd.o	\
		stats.o

obj-m	+= rtl_pci.o
rtl_pci-objs	:=		pci.o

obj-m	+= rtl_usb.o
rtl_usb-objs	:=		usb.o

obj-m	+= btcoexist/
obj-m	+= rtl8723ae/
obj-m	+= rtl8723com/
obj-m	+= rtl8723be/
ccflags-y += -D__CHECK_ENDIAN__
#subdir-ccflags-y += -Werror

ifeq ("$(KVER)", $(filter "$(KVER)", "3.14.35-031435-generic" "3.14.35-031435-lowlatency"))
ccflags-y += -D_ieee80211_is_robust_mgmt_frame=ieee80211_is_robust_mgmt_frame
subdir-ccflags-y += -D_ieee80211_is_robust_mgmt_frame=ieee80211_is_robust_mgmt_frame
endif
# Determine # args for rtl_rate_alloc
TEMP=$(shell grep alloc ${KSRC}/include/net/mac80211.h | grep void | grep dentry)
ifeq (${TEMP},)
ccflags-y += -DRTL_RATE_ALLOC_1_ARG
endif
# for uncooked code
uncooked_ccflags-y += -DBT_SUPPORT=1
uncooked_ccflags-y += -DCOEX_SUPPORT=1
uncooked_ccflags-y += -DRTL8822B_SUPPORT=1
uncooked_ccflags-y += -DRTL8723D_SUPPORT=1
ccflags-y += $(uncooked_ccflags-y)
subdir-ccflags-y += $(uncooked_ccflags-y)

all: 
	$(MAKE) -C $(KSRC) M=$(PWD) modules
install: all
ifeq (,$(wildcard ./backup_drivers.tar))
	@echo Making backups
	@tar cPf backup_drivers.tar $(MODDESTDIR)
endif

	@mkdir -p $(MODDESTDIR)/btcoexist
	@mkdir -p $(MODDESTDIR)/rtl8723ae
	@mkdir -p $(MODDESTDIR)/rtl8723be
	@mkdir -p $(MODDESTDIR)/rtl8723com
	@install -p -D -m 644 rtl_pci.ko $(MODDESTDIR)	
	@install -p -D -m 644 rtl_usb.ko $(MODDESTDIR)	
	@install -p -D -m 644 rtlwifi.ko $(MODDESTDIR)
	@install -p -D -m 644 ./btcoexist/btcoexist.ko $(MODDESTDIR)/btcoexist
	@install -p -D -m 644 ./rtl8723ae/rtl8723ae.ko $(MODDESTDIR)/rtl8723ae
	@install -p -D -m 644 ./rtl8723be/rtl8723be.ko $(MODDESTDIR)/rtl8723be
	@install -p -D -m 644 ./rtl8723com/rtl8723-common.ko $(MODDESTDIR)/rtl8723com
ifeq ($(COMPRESS_GZIP), y)
	@gzip -f $(MODDESTDIR)/*.ko
	@gzip -f $(MODDESTDIR)/btcoexist/*.ko
	@gzip -f $(MODDESTDIR)/rtl8*/*.ko
endif
ifeq ($(COMPRESS_XZ), y)
	@xz -f $(MODDESTDIR)/*.ko
	@xz -f $(MODDESTDIR)/btcoexist/*.ko
	@xz -f $(MODDESTDIR)/rtl8*/*.ko
endif

	@depmod -a $(KVER)

	@#copy firmware images to target folder
	@mkdir -p $(FIRMWAREDIR)
	@cp -fr firmware/rtlwifi/ $(FIRMWAREDIR)/
	@echo "Install rtlwifi SUCCESS"

uninstall:
ifneq (,$(wildcard ./backup_drivers.tar))
	@echo Restoring backups
	@tar xvPf backup_drivers.tar
endif
	
	@depmod -a
	
	@echo "Uninstall rtlwifi SUCCESS"

clean:
	@rm -fr *.mod.c *.mod *.o .*.cmd *.ko *~ .*.o.d .cache.mk
	@rm -fr rtl8*/*.mod.c rtl8*/*.mod rtl8*/*.o rtl8*/.*.cmd rtl8*/*.ko rtl8*/*~ rtl8*/*.cmd rtl8*/.*.o.d
	@rm -fr bt*/*.mod.c bt*/*.mod bt*/*.o bt*/.*.cmd bt*/*.ko bt*/*~ bt*/*.cmd bt*/.*.o.d
	@rm -fr .tmp_versions
	@rm -fr Modules.symvers
	@rm -fr Module.symvers
	@rm -fr Module.markers
	@rm -fr modules.order rtl8*/modules.order bt*/modules.order
