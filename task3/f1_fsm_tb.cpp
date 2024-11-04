#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env){
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    //init top verilog instance
    Vf1_fsm* top = new Vf1_fsm;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("f1_fsm.vcd");

    //initialise Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("F1 Lights");

    //initialise simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 0;
    top->N = 0x39;

    // run simulation for MAX_SIM_CYC clock cycles
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
            // dump variables into VCD file and toggle clock
            for (tick=0; tick<2; tick++) {
              tfp->dump (2*simcyc+tick);
              top->clk = !top->clk;
              top->eval ();
            }

        // Send output value to Vbuddy
        top->rst = (simcyc < 2); // assert reset for 1st cycle
        top->en = (simcyc > 2);
        if(top->tick){
          vbdBar(top->data_out & 0xFF);
        }
        vbdCycle(simcyc);
        // end of Vbuddy output


        //top->rst = (i <2) | (i == 15);
        //top->en = (i>4);
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            exit(0);
    }

  vbdClose();     // ++++
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}