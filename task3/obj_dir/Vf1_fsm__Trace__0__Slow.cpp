// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_fsm__Syms.h"


VL_ATTR_COLD void Vf1_fsm___024root__trace_init_sub__TOP__0(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_fsm ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBus(c+6,"data_out", false,-1, 7,0);
    tracep->declBus(c+7,"current_state", false,-1, 7,0);
    tracep->declBus(c+8,"next_state", false,-1, 7,0);
    tracep->pushNamePrefix("delay ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+3,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"en", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBus(c+9,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_init_top(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_init_top\n"); );
    // Body
    Vf1_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_fsm___024root__trace_register(Vf1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_fsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_fsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_top_0\n"); );
    // Init
    Vf1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_fsm___024root*>(voidSelf);
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_fsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_fsm___024root__trace_full_sub_0(Vf1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_fsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->rst));
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullBit(oldp+3,(vlSelf->clk));
    bufp->fullBit(oldp+4,(vlSelf->tick));
    bufp->fullSData(oldp+5,(vlSelf->N),16);
    bufp->fullCData(oldp+6,(vlSelf->data_out),8);
    bufp->fullCData(oldp+7,(vlSelf->f1_fsm__DOT__current_state),8);
    bufp->fullCData(oldp+8,(vlSelf->f1_fsm__DOT__next_state),8);
    bufp->fullSData(oldp+9,(vlSelf->f1_fsm__DOT__delay__DOT__count),16);
    bufp->fullIData(oldp+10,(0x10U),32);
}
