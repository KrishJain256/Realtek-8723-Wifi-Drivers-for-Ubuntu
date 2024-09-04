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
	{ 0xdecd019b, "ieee80211_rx_napi" },
	{ 0xac1c4313, "kmalloc_caches" },
	{ 0xbf3f4c94, "rtl_deinit_deferred_work" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xda1afec1, "rtl_deinit_core" },
	{ 0x1cd6d5ed, "usb_get_from_anchor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xafd30e63, "ieee80211_unregister_hw" },
	{ 0x337c1f75, "__dev_kfree_skb_any" },
	{ 0x49bab3c9, "usb_unanchor_urb" },
	{ 0x6d881d1, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xbd2816da, "skb_queue_purge" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc3f90710, "ieee80211_alloc_hw_nm" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x91eb1442, "rtl_init_core" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x7999b436, "rtl_action_proc" },
	{ 0x9107828d, "rtl_dbgp_flag_init" },
	{ 0xcc7ef1da, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe9ad80dc, "kfree_skb_reason" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xc4b84a63, "rtl_init_rx_config" },
	{ 0x82e8cddf, "skb_pull" },
	{ 0x78e3401a, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7a9aa9d4, "skb_queue_tail" },
	{ 0xbd70750d, "usb_submit_urb" },
	{ 0xce0dc0cc, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xd5ab5b23, "usb_put_dev" },
	{ 0x48718aa6, "ieee80211_tx_status_irqsafe" },
	{ 0x10d4cec4, "rtl_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x42d28b89, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x24cdd00e, "rtl_ips_nic_on" },
	{ 0x8398881f, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x981305fb, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0xbab8c874, "usb_alloc_coherent" },
	{ 0x3df865a5, "skb_put" },
	{ 0x88bce085, "usb_free_urb" },
	{ 0x183e8646, "rtl_beacon_statistic" },
	{ 0x29169978, "usb_anchor_urb" },
	{ 0x1f861c5f, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "B27C0D3408D7481E12E595C");
