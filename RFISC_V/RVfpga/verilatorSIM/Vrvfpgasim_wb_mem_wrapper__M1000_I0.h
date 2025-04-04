// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvfpgasim.h for the primary calling header

#ifndef _VRVFPGASIM_WB_MEM_WRAPPER__M1000_I0_H_
#define _VRVFPGASIM_WB_MEM_WRAPPER__M1000_I0_H_  // guard

#include "verilated_heavy.h"
#include "Vrvfpgasim__Dpi.h"

//==========

class Vrvfpgasim__Syms;
class Vrvfpgasim_VerilatedVcd;
class Vrvfpgasim_dpram64__S1000_MB0;


//----------

VL_MODULE(Vrvfpgasim_wb_mem_wrapper__M1000_I0) {
  public:
    // CELLS
    Vrvfpgasim_dpram64__S1000_MB0* ram;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst,0,0);
    VL_IN8(__PVT__i_wb_sel,3,0);
    VL_IN8(__PVT__i_wb_we,0,0);
    VL_IN8(__PVT__i_wb_cyc,0,0);
    VL_IN8(__PVT__i_wb_stb,0,0);
    VL_OUT8(__PVT__o_wb_ack,0,0);
    VL_IN16(__PVT__i_wb_adr,11,2);
    VL_IN(__PVT__i_wb_dat,31,0);
    VL_OUT(__PVT__o_wb_rdt,31,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__mem_we;
    IData/*31:0*/ __PVT__mem_addr;
    
    // INTERNAL VARIABLES
  private:
    Vrvfpgasim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvfpgasim_wb_mem_wrapper__M1000_I0);  ///< Copying not allowed
  public:
    Vrvfpgasim_wb_mem_wrapper__M1000_I0(const char* name = "TOP");
    ~Vrvfpgasim_wb_mem_wrapper__M1000_I0();
    
    // INTERNAL METHODS
    void __Vconfigure(Vrvfpgasim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__rvfpgasim__swervolf__bootrom__2(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void _settle__TOP__rvfpgasim__swervolf__bootrom__1(Vrvfpgasim__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
