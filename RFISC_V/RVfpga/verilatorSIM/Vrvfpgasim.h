// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRVFPGASIM_H_
#define _VRVFPGASIM_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;
class Vrvfpgasim_VerilatedVcd;
class Vrvfpgasim_rvfpgasim;


//----------

VL_MODULE(Vrvfpgasim) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vrvfpgasim_rvfpgasim* rvfpgasim;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(i_jtag_tck,0,0);
    VL_IN8(i_jtag_trst_n,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(i_jtag_tms,0,0);
    VL_IN8(i_jtag_tdi,0,0);
    VL_OUT8(o_jtag_tdo,0,0);
    VL_OUT8(o_uart_tx,0,0);
    VL_OUT8(o_gpio,0,0);
    VL_IN8(i_sw0,0,0);
    VL_IN8(i_BTNC,0,0);
    VL_IN8(i_BTNU,0,0);
    VL_IN8(i_BTNL,0,0);
    VL_IN8(i_BTNR,0,0);
    VL_IN8(i_BTND,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim____Vcellinp__swervolf__rstn;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __VinpClk__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim____Vcellinp__swervolf__rstn;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf____PVT__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __Vclklast__TOP__i_jtag_tck;
        CData/*0:0*/ __Vclklast__TOP__i_jtag_trst_n;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__hrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__lrc_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf____PVT__timer_ptc__DOT__cntr_clk;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__0__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__1__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__2__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__3__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__4__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__5__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__6__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellinp__mem_bank__BRA__7__KET____DOT__dccm_bank__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__0__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__1__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__2__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__SUBBANKS__BRA__3__KET____DOT__ic_bank_sb_way_data__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__0__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__1__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__2__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vclklast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT____Vcellinp__WAYS__BRA__3__KET____DOT__ICACHE_SZ_16__DOT__ic_way_tag__CLK;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim____Vcellinp__swervolf__rstn;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc__DOT__eclk_gate;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__core_rst_l;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l;
        CData/*0:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__dbg__DOT____Vcellinp__dbg_state_reg__rst_l;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__3__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__0__KET____DOT__COMPARE__BRA__4__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__1__KET____DOT__COMPARE__BRA__2__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
    };
    struct {
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__2__KET____DOT__COMPARE__BRA__1__KET____DOT__cmp_l1__out_id;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_priority;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__swerv_eh1__DOT__swerv__DOT__pic_ctrl_inst__DOT____Vcellout__LEVEL__BRA__3__KET____DOT__COMPARE__BRA__0__KET____DOT__cmp_l1__out_id;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__index_nodes;
        IData/*20:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__data_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
    };
    struct {
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        CData/*5:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes;
        CData/*2:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes;
        CData/*3:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes;
        CData/*7:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes;
        SData/*8:0*/ __Vchglast__TOP__rvfpgasim__swervolf__timer_ptc__DOT__rptc_ctrl;
        WData/*95:0*/ __Vm_traceActivity[3];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*650:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__mst_reqs_o[21];
        WData/*215:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_r_mux__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*221:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*203:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*221:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
        WData/*203:0*/ __Vchglast__TOP__rvfpgasim__swervolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[7];
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrvfpgasim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vrvfpgasim();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vrvfpgasim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrvfpgasim__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vrvfpgasim__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vrvfpgasim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void traceChgThis(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__100(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__101(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__102(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__103(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__104(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__105(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__106(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__107(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__108(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__109(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__110(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__111(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__112(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__113(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__114(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__115(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__116(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__117(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__118(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__119(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__120(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__121(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__122(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__123(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__124(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__125(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__126(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__127(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__128(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__129(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__13(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__130(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__131(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__132(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__133(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__134(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__135(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__136(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__137(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__138(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__139(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__14(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__140(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__141(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__142(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__143(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__144(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__145(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__146(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__147(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__148(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__149(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__15(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__150(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__151(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__152(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__153(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__154(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__155(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__156(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__157(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__158(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__159(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__16(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__160(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__161(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__17(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__18(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__19(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__20(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__21(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__22(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__23(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__24(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__25(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__26(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__27(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__28(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__29(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__30(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__31(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__32(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__33(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__34(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__35(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__36(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__37(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__38(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__39(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__40(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__41(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__42(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__43(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__44(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__45(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__46(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__47(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__48(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__49(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__50(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__51(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__52(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__53(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__54(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__55(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__56(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__57(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__58(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__59(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__60(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__61(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__62(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__63(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__64(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__65(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__66(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__67(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__68(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__69(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__70(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__71(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__72(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__73(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__74(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__75(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__76(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__77(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__78(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__79(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__80(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__81(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__82(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__83(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__84(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__85(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__86(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__87(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__88(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__89(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__90(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__91(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__92(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__93(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__94(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__95(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__96(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__97(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__98(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__99(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vrvfpgasim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
