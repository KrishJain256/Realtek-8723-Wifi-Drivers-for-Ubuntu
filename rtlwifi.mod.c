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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x30ff7695, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x961f80c8, "ieee80211_rx_irqsafe" },
	{ 0xac1c4313, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa6f09f89, "debugfs_create_dir" },
	{ 0x801e8735, "single_open" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x2c1ed80, "seq_puts" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2d8437bb, "ieee80211_beacon_get_tim" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0xa68165d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1895ba39, "ieee80211_resume_disconnect" },
	{ 0x11077475, "seq_write" },
	{ 0x337c1f75, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc78a7cc9, "freq_reg_info" },
	{ 0x3d5145a7, "debugfs_create_file" },
	{ 0x6abcc6a1, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x1130b706, "wiphy_rfkill_set_hw_state_reason" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x83599202, "seq_read" },
	{ 0x33a21a09, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6d881d1, "__netdev_alloc_skb" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x84be4c3e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x663f771d, "ieee80211_rate_control_register" },
	{ 0xb4ecd821, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7dbc73ca, "wiphy_apply_custom_regulatory" },
	{ 0x2b6a7d06, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3939f8f0, "rfkill_pause_polling" },
	{ 0x610c88af, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb312ec9e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xcd58f845, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe76499f5, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd34d288b, "ieee80211_rate_control_unregister" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa5457562, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf0fdb384, "ieee80211_start_tx_ba_session" },
	{ 0xd56f417d, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c01f64d, "seq_release" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3df865a5, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3bd9a199, "ieee80211_connection_loss" },
	{ 0x7cf2e689, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x73869298, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "210D9F9EFFC00E4D1903F85");
