# RVlab_SoC
System on Chip, WiSe 2024/2025 TU Berlin

## Ex. 4: DMA / TL-UL host implementation
> implement a simple TL-UL host. master bus. <br>
> TL-UL Protocol: Tilelink Uncached Lightweight. integrated in RISC-V <br>
[specification](https://github.com/SonyaX20/RVlab_SoC/blob/main/risc-v-lab-group-01/docs/resources/res/tilelink-spec-1.8.0.pdf)

### 1. Explore the example
example for [TL-UL integration](risc-v-lab-group-01/src/rtl/student/student_dma.sv) <br>
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
CPU accessible registers [definition](risc-v-lab-group-01/src/design/reggen/student_dma.hjson), but basically like this:
![image](https://github.com/SonyaX20/RVlab_SoC/assets/147299585/a1a511a7-62ff-48fd-90fb-4e6f2c2193b4)

### 2. Hardware implementation
extend the module with "memcpy", use fifo for [pending](risc-v-lab-group-01/src/rtl/prim/prim_fifo_sync.sv) <br>

### 3. Software implementation
Extend memcpy_soft to contain a complete software implementation of mem copy with the same functionality as your hardware implementation. <br>
Complete memcpy_dma so it invokes your hardware implementation.<br>

### 4. Test cases
### 5. Benchmarking
