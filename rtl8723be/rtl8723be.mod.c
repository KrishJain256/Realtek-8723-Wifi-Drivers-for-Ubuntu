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
	{ 0xc87c5ec8, "rtl_cam_delete_one_entry" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0xac1c4313, "kmalloc_caches" },
	{ 0x250d70cd, "rtl8723_phy_reload_adda_registers" },
	{ 0x18a19cb0, "rtl_pci_probe" },
	{ 0x4ccc925d, "rtl_cam_get_free_entry" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf9418c06, "param_ops_int" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x31d8e45, "rtl_dm_diginit" },
	{ 0xf9b0a67c, "rtl_ps_disable_nic" },
	{ 0xf3c4a057, "rtl_btc_get_ops_pointer" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x35dea462, "rtl8723_download_fw" },
	{ 0xdc6418da, "efuse_power_switch" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ce6a381, "rtl_get_tcb_desc" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x83253110, "param_ops_bool" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x32018e62, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x33a21a09, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6d881d1, "__netdev_alloc_skb" },
	{ 0xf4740499, "rtl8723_dm_init_dynamic_txpower" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x862b8285, "rtl_pci_resume" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xd8be5943, "rtl8723_phy_reload_mac_registers" },
	{ 0x1d022e5c, "rtl_ps_enable_nic" },
	{ 0x90285ee0, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2186e364, "rtl8723_dm_init_dynamic_bb_powersaving" },
	{ 0x74a0f0e, "rtl8723_phy_rf_serial_read" },
	{ 0x6e3de6e8, "rtl8723_phy_query_bb_reg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa5d62633, "skb_push" },
	{ 0xe9ad80dc, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7bf788eb, "rtl_signal_scale_mapping" },
	{ 0xd4fa1fe, "rtl8723_phy_mac_setting_calibration" },
	{ 0xc49b43f5, "request_firmware_nowait" },
	{ 0x47742b33, "rtl8723_phy_path_a_fill_iqk_matrix" },
	{ 0xce0e0571, "rtl8723_dm_init_edca_turbo" },
	{ 0x13f0aa29, "rtl_pci_suspend" },
	{ 0xd7cbcfbc, "rtlwifi_rate_mapping" },
	{ 0xd4d9331f, "rtl8723_save_adda_registers" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf77714, "rtl_pci_disconnect" },
	{ 0xfdfbed7, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xc24f3a0a, "rtl8723_phy_init_bb_rf_reg_def" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x461f3cc3, "dma_map_page_attrs" },
	{ 0xcd58f845, "ieee80211_find_sta" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xad7b2e29, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc0b2bc48, "pci_unregister_driver" },
	{ 0x4f00afd3, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3e6bb7c3, "rtl8723_phy_save_mac_registers" },
	{ 0xdc3d7897, "rtl_cam_mark_invalid" },
	{ 0xcd8b1cdf, "efuse_one_byte_read" },
	{ 0xc50c3271, "rtl_tx_report_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x21599ed, "rtl_cam_del_entry" },
	{ 0xf0d31bfe, "rtl_cam_empty_entry" },
	{ 0x433f0b06, "__pci_register_driver" },
	{ 0x4b4ce6ce, "dma_unmap_page_attrs" },
	{ 0xfb6bcf2f, "rtl_cam_reset_all_entry" },
	{ 0x696d9fd0, "rtl8723be_firmware_selfreset" },
	{ 0xc8018aa, "rtl_c2hcmd_enqueue" },
	{ 0x8fea3a89, "rtl8723_phy_path_adda_on" },
	{ 0x9dd14b0f, "rtl_process_phyinfo" },
	{ 0x3df865a5, "skb_put" },
	{ 0xd4ac3256, "rtl8723_phy_rf_serial_write" },
	{ 0x3f5bf9c0, "rtl8723_phy_calculate_bit_shift" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x2a3e34f8, "rtl_get_tx_report" },
	{ 0xb0122192, "rtl8723_phy_set_bb_reg" },
	{ 0x8baf8913, "rtl8723_phy_set_sw_chnl_cmdarray" },
};

MODULE_INFO(depends, "rtlwifi,rtl8723-common,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd0000B723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5C96F25AD92EF6C05B75652");
