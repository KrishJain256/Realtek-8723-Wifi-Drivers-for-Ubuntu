#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x30ff7695, "module_layout" },
	{ 0x961f80c8, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x90e88c62, "rtl_swlps_beacon" },
	{ 0xbf3f4c94, "rtl_deinit_deferred_work" },
	{ 0x8d4c290, "rtl_debug_remove_one" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x45a7cdeb, "pci_read_config_byte" },
	{ 0x1e6f1b87, "dma_set_mask" },
	{ 0x3d258838, "pci_disable_device" },
	{ 0xda1afec1, "rtl_deinit_core" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x2d8437bb, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xafd30e63, "ieee80211_unregister_hw" },
	{ 0xb6ab2f08, "pci_write_config_byte" },
	{ 0x337c1f75, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x145ca79, "pci_release_regions" },
	{ 0xf9fd2771, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa570f2e2, "read_efuse_byte" },
	{ 0x6eec4dac, "dma_set_coherent_mask" },
	{ 0x8270e8ee, "rtl_collect_scan_list" },
	{ 0x6d881d1, "__netdev_alloc_skb" },
	{ 0xb000e8f4, "ieee80211_stop_queue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xb24af53b, "pci_set_master" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0x904354ef, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc3f90710, "ieee80211_alloc_hw_nm" },
	{ 0x91eb1442, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7999b436, "rtl_action_proc" },
	{ 0x9107828d, "rtl_dbgp_flag_init" },
	{ 0x648d9e84, "pci_read_config_word" },
	{ 0xa751b1a4, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe9ad80dc, "kfree_skb_reason" },
	{ 0x2b6a7d06, "__dev_kfree_skb_irq" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc4b84a63, "rtl_init_rx_config" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x82e8cddf, "skb_pull" },
	{ 0x8b83c5d2, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7a9aa9d4, "skb_queue_tail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x48718aa6, "ieee80211_tx_status_irqsafe" },
	{ 0x10d4cec4, "rtl_ops" },
	{ 0xdccc581c, "rtl_deinit_rfkill" },
	{ 0x92997ed8, "_printk" },
	{ 0x461f3cc3, "dma_map_page_attrs" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x559bf800, "pci_read_config_dword" },
	{ 0xad7b2e29, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3b8df2b, "rtl_p2p_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa44d8283, "ieee80211_wake_queue" },
	{ 0x42d28b89, "ieee80211_register_hw" },
	{ 0xe3b3645, "rtl_lps_leave" },
	{ 0xc08fcff9, "rtl_recognize_peer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x210cdac4, "pci_request_regions" },
	{ 0x84a9f55, "rtl_is_special_data" },
	{ 0x29461c29, "pci_disable_msi" },
	{ 0x364b0f56, "rtl_init_rfkill" },
	{ 0x4b4ce6ce, "dma_unmap_page_attrs" },
	{ 0x8398881f, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x981305fb, "skb_dequeue" },
	{ 0x9af70150, "rtl_debug_add_one" },
	{ 0xa6257a2f, "complete" },
	{ 0xd6928da2, "pci_iomap" },
	{ 0x26d3d5c6, "consume_skb" },
	{ 0x3df865a5, "skb_put" },
	{ 0x58a78df9, "pci_enable_device" },
	{ 0xcbb7cc6f, "rtl_tx_mgmt_proc" },
	{ 0x183e8646, "rtl_beacon_statistic" },
	{ 0x481550fe, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "AA6CC0409B2C962940A8730");
