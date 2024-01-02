// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_wb_mem_wrapper__M1000_Iz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::_settle__TOP__rvfpgasim__swervolf__bootrom__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::_settle__TOP__rvfpgasim__swervolf__bootrom__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1[7];
    WData/*223:0*/ __Vtemp3[7];
    // Body
    __Vtemp1[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp1[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp1[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp1[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp1[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp1[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp1[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we 
        = (0xf0U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we));
    __Vtemp3[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp3[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp3[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp3[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp3[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp3[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    __Vtemp3[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                    << 2U);
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we 
        = (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we));
}

VL_INLINE_OPT void Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::_sequent__TOP__rvfpgasim__swervolf__bootrom__2(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrvfpgasim_wb_mem_wrapper__M1000_Iz1::_sequent__TOP__rvfpgasim__swervolf__bootrom__2\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rstn)))) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__o_wb_ack = 0U;
    }
}
