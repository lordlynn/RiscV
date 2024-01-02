// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_dpram64__S1000_MBz1.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_dpram64__S1000_MBz1::_sequent__TOP__rvfpgasim__swervolf__bootrom__ram__1(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrvfpgasim_dpram64__S1000_MBz1::_sequent__TOP__rvfpgasim__swervolf__bootrom__ram__1\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvlsb__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*5:0*/ __Vdlyvlsb__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    CData/*5:0*/ __Vdlyvlsb__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    CData/*5:0*/ __Vdlyvlsb__mem__v3;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    CData/*5:0*/ __Vdlyvlsb__mem__v4;
    CData/*7:0*/ __Vdlyvval__mem__v4;
    CData/*0:0*/ __Vdlyvset__mem__v4;
    CData/*5:0*/ __Vdlyvlsb__mem__v5;
    CData/*7:0*/ __Vdlyvval__mem__v5;
    CData/*0:0*/ __Vdlyvset__mem__v5;
    CData/*5:0*/ __Vdlyvlsb__mem__v6;
    CData/*7:0*/ __Vdlyvval__mem__v6;
    CData/*0:0*/ __Vdlyvset__mem__v6;
    CData/*5:0*/ __Vdlyvlsb__mem__v7;
    CData/*7:0*/ __Vdlyvval__mem__v7;
    CData/*0:0*/ __Vdlyvset__mem__v7;
    SData/*8:0*/ __Vdlyvdim0__mem__v0;
    SData/*8:0*/ __Vdlyvdim0__mem__v1;
    SData/*8:0*/ __Vdlyvdim0__mem__v2;
    SData/*8:0*/ __Vdlyvdim0__mem__v3;
    SData/*8:0*/ __Vdlyvdim0__mem__v4;
    SData/*8:0*/ __Vdlyvdim0__mem__v5;
    SData/*8:0*/ __Vdlyvdim0__mem__v6;
    SData/*8:0*/ __Vdlyvdim0__mem__v7;
    WData/*223:0*/ __Vtemp1[7];
    WData/*255:0*/ __Vtemp2[8];
    WData/*223:0*/ __Vtemp3[7];
    WData/*255:0*/ __Vtemp4[8];
    WData/*223:0*/ __Vtemp5[7];
    WData/*255:0*/ __Vtemp6[8];
    WData/*223:0*/ __Vtemp7[7];
    WData/*255:0*/ __Vtemp8[8];
    WData/*223:0*/ __Vtemp9[7];
    WData/*255:0*/ __Vtemp10[8];
    WData/*223:0*/ __Vtemp11[7];
    WData/*255:0*/ __Vtemp12[8];
    WData/*223:0*/ __Vtemp13[7];
    WData/*255:0*/ __Vtemp14[8];
    WData/*223:0*/ __Vtemp15[7];
    WData/*255:0*/ __Vtemp16[8];
    WData/*223:0*/ __Vtemp17[7];
    WData/*255:0*/ __Vtemp18[8];
    WData/*223:0*/ __Vtemp19[7];
    WData/*255:0*/ __Vtemp20[8];
    WData/*223:0*/ __Vtemp21[7];
    WData/*255:0*/ __Vtemp22[8];
    WData/*223:0*/ __Vtemp23[7];
    WData/*255:0*/ __Vtemp24[8];
    WData/*223:0*/ __Vtemp25[7];
    WData/*255:0*/ __Vtemp26[8];
    WData/*223:0*/ __Vtemp27[7];
    WData/*255:0*/ __Vtemp28[8];
    WData/*223:0*/ __Vtemp29[7];
    WData/*255:0*/ __Vtemp30[8];
    WData/*223:0*/ __Vtemp31[7];
    WData/*255:0*/ __Vtemp32[8];
    WData/*223:0*/ __Vtemp33[7];
    WData/*255:0*/ __Vtemp34[8];
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    __Vdlyvset__mem__v4 = 0U;
    __Vdlyvset__mem__v5 = 0U;
    __Vdlyvset__mem__v6 = 0U;
    __Vdlyvset__mem__v7 = 0U;
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
    VL_EXTEND_WW(256,224, __Vtemp2, __Vtemp1);
    vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.__PVT__dout 
        = vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
        [(0x1ffU & (__Vtemp2[7U] >> 3U))];
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp3[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp3[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp3[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp3[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp3[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp3[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp3[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp4, __Vtemp3);
        __Vdlyvval__mem__v0 = (0xffU & __Vtemp4[7U]);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvlsb__mem__v0 = 0U;
        __Vtemp5[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp5[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp5[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp5[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp5[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp5[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp5[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        VL_EXTEND_WW(256,224, __Vtemp6, __Vtemp5);
        __Vdlyvdim0__mem__v0 = (0x1ffU & (__Vtemp6[7U] 
                                          >> 3U));
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp7[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp7[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp7[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp7[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp7[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp7[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp7[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp8, __Vtemp7);
        __Vdlyvval__mem__v1 = (0xffU & (__Vtemp8[7U] 
                                        >> 8U));
        __Vdlyvset__mem__v1 = 1U;
        __Vdlyvlsb__mem__v1 = 8U;
        __Vtemp9[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp9[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp9[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp9[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp9[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp9[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        __Vtemp9[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                        << 2U);
        VL_EXTEND_WW(256,224, __Vtemp10, __Vtemp9);
        __Vdlyvdim0__mem__v1 = (0x1ffU & (__Vtemp10[7U] 
                                          >> 3U));
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp11[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp11[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp11[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp11[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp11[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp11[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp11[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp12, __Vtemp11);
        __Vdlyvval__mem__v2 = (0xffU & (__Vtemp12[7U] 
                                        >> 0x10U));
        __Vdlyvset__mem__v2 = 1U;
        __Vdlyvlsb__mem__v2 = 0x10U;
        __Vtemp13[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp13[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp13[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp13[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp13[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp13[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp13[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        VL_EXTEND_WW(256,224, __Vtemp14, __Vtemp13);
        __Vdlyvdim0__mem__v2 = (0x1ffU & (__Vtemp14[7U] 
                                          >> 3U));
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp15[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp15[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp15[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp15[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp15[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp15[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp15[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp16, __Vtemp15);
        __Vdlyvval__mem__v3 = (0xffU & (__Vtemp16[7U] 
                                        >> 0x18U));
        __Vdlyvset__mem__v3 = 1U;
        __Vdlyvlsb__mem__v3 = 0x18U;
        __Vtemp17[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp17[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp17[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp17[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp17[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp17[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp17[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        VL_EXTEND_WW(256,224, __Vtemp18, __Vtemp17);
        __Vdlyvdim0__mem__v3 = (0x1ffU & (__Vtemp18[7U] 
                                          >> 3U));
    }
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp19[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp19[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp19[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp19[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp19[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp19[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp19[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp20, __Vtemp19);
        __Vdlyvval__mem__v4 = (0xffU & __Vtemp20[7U]);
        __Vdlyvset__mem__v4 = 1U;
        __Vdlyvlsb__mem__v4 = 0x20U;
        __Vtemp21[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp21[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp21[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp21[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp21[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp21[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp21[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        VL_EXTEND_WW(256,224, __Vtemp22, __Vtemp21);
        __Vdlyvdim0__mem__v4 = (0x1ffU & (__Vtemp22[7U] 
                                          >> 3U));
    }
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp23[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp23[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp23[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp23[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp23[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp23[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp23[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp24, __Vtemp23);
        __Vdlyvval__mem__v5 = (0xffU & (__Vtemp24[7U] 
                                        >> 8U));
        __Vdlyvset__mem__v5 = 1U;
        __Vdlyvlsb__mem__v5 = 0x28U;
        __Vtemp25[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp25[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp25[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp25[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp25[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp25[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp25[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        VL_EXTEND_WW(256,224, __Vtemp26, __Vtemp25);
        __Vdlyvdim0__mem__v5 = (0x1ffU & (__Vtemp26[7U] 
                                          >> 3U));
    }
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp27[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp27[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp27[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp27[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp27[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp27[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp27[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp28, __Vtemp27);
        __Vdlyvval__mem__v6 = (0xffU & (__Vtemp28[7U] 
                                        >> 0x10U));
        __Vdlyvset__mem__v6 = 1U;
        __Vdlyvlsb__mem__v6 = 0x30U;
        __Vtemp29[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp29[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp29[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp29[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp29[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp29[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp29[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        VL_EXTEND_WW(256,224, __Vtemp30, __Vtemp29);
        __Vdlyvdim0__mem__v6 = (0x1ffU & (__Vtemp30[7U] 
                                          >> 3U));
    }
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom.__PVT__mem_we))) {
        __Vtemp31[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp31[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp31[2U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp31[3U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp31[4U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp31[5U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        __Vtemp31[6U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_m2s_io_dat;
        VL_EXTEND_WW(256,224, __Vtemp32, __Vtemp31);
        __Vdlyvval__mem__v7 = (0xffU & (__Vtemp32[7U] 
                                        >> 0x18U));
        __Vdlyvset__mem__v7 = 1U;
        __Vdlyvlsb__mem__v7 = 0x38U;
        __Vtemp33[0U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp33[1U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp33[2U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp33[3U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp33[4U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp33[5U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        __Vtemp33[6U] = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__wb_adr) 
                         << 2U);
        VL_EXTEND_WW(256,224, __Vtemp34, __Vtemp33);
        __Vdlyvdim0__mem__v7 = (0x1ffU & (__Vtemp34[7U] 
                                          >> 3U));
    }
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v0))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v0]) | ((QData)((IData)(__Vdlyvval__mem__v0)) 
                                           << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v1))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v1]) | ((QData)((IData)(__Vdlyvval__mem__v1)) 
                                           << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v2))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v2]) | ((QData)((IData)(__Vdlyvval__mem__v2)) 
                                           << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v3]) | ((QData)((IData)(__Vdlyvval__mem__v3)) 
                                           << (IData)(__Vdlyvlsb__mem__v3)));
    }
    if (__Vdlyvset__mem__v4) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v4))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v4]) | ((QData)((IData)(__Vdlyvval__mem__v4)) 
                                           << (IData)(__Vdlyvlsb__mem__v4)));
    }
    if (__Vdlyvset__mem__v5) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v5))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v5]) | ((QData)((IData)(__Vdlyvval__mem__v5)) 
                                           << (IData)(__Vdlyvlsb__mem__v5)));
    }
    if (__Vdlyvset__mem__v6) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v6))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v6]) | ((QData)((IData)(__Vdlyvval__mem__v6)) 
                                           << (IData)(__Vdlyvlsb__mem__v6)));
    }
    if (__Vdlyvset__mem__v7) {
        vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem[__Vdlyvdim0__mem__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mem__v7))) 
                & vlSymsp->TOP__rvfpgasim__swervolf__bootrom__ram.mem
                [__Vdlyvdim0__mem__v7]) | ((QData)((IData)(__Vdlyvval__mem__v7)) 
                                           << (IData)(__Vdlyvlsb__mem__v7)));
    }
}
