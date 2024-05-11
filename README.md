# RVlab_SoC
System on Chip in TU Berlin

## Ex. 4: DMA / TL-UL host implementation
> implement a simple TL-UL host. master bus. <br>
> TL-UL Protocol: Tilelink Uncached Lightweight. integrated in RISC-V <br>
[specification](https://github.com/SonyaX20/RVlab_SoC/blob/main/risc-v-lab-group-01/docs/resources/res/tilelink-spec-1.8.0.pdf)

### 1. Explore the example
[example for TL-UL integration](risc-v-lab-group-01/src/rtl/student/student_dma.sv)
with [intiation in](risc-v-lab-group-01/src/rtl/student/student.sv) 
```verilog
    student_dma dma_i (
    .clk_i,
    .rst_ni,
    .tl_o (tl_device_fast_o),
    .tl_i (tl_device_fast_i),
    .tl_host_o,
    .tl_host_i
  );
```
