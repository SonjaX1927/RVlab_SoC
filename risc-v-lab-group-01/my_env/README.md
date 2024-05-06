- [Exe02](#exe02)
- [Modify main.c](#modify_main.c)
  - [Perform a logic synthesis of rvlab_fpta_top](#logicsync)
  - [Perform a place and route of rvlab_fpga_top](#pnr)
  - [Generate the bitfile](#bitfile)
- [FPGA netlist simulation](#netlist)

# Exe02
## Modify main.c
here to check 3 kind of register length <br>
try some tests on RegA (led patterns) and RegB (FSM initial):
* assign RegA with specific patterns
* 
![image](https://github.com/SonyaX20/RVlab_SoC/assets/147299585/3e75e8e8-bfa8-40ff-8aab-be7dd4fddb2b)

### Perform a logic synthesis of rvlab_fpta_top
Generate mainly: <br>
![image](https://github.com/SonyaX20/RVlab_SoC/assets/147299585/5324f1e7-3471-4ce0-ab75-da1c81b7ed5a) <br>
Information that could be read out from rvlab_fpga_top.timing_summary.txt: <br>

```
1. Timing Summary Report
This section outlines the basic settings and configurations used during the timing analysis, including:

Multi Corner Analysis: Indicates that the analysis considers different process corners (e.g., slow, fast).
Pessimism Removal: Enabled, helping to provide more accurate timing by eliminating unnecessary pessimism in path delay calculations.
2. Check Timing Report
This provides a list of checks performed on the design:

No Input Delay (1) and No Output Delay (9): These checks show there are certain ports without specified input and output delays, which could lead to inaccurate timing analysis. It's suggested to specify these delays or confirm if they should be unconstrained.
All other checks such as no_clock, constant_clock, etc., report 0 issues, indicating no problems in those specific areas.
3. Design Timing Summary
This section highlights the overall timing performance:

Worst Negative Slack (WNS): -1.302 ns, indicating the most critical timing path fails to meet the timing requirement by 1.302 ns.
Total Negative Slack (TNS): -233.796 ns, summing up all negative slacks across failing paths.
This shows that the design does not meet timing requirements, and optimization or constraints adjustment is needed.
4. Clock Summary
Detailed information about each clock in the system including their frequencies and derived clocks. For instance, clk_100mhz with a period of 10.000 ns (100 MHz) and others like clk_200mhz, mem_refclk with various sub-clocks listed under them, providing an insight into the clocking architecture used in the design.

5. Intra and Inter Clock Table
Intra Clock Table: Shows timing details between paths clocked by the same clock source.
Inter Clock Table: Timing details for paths between different clock domains, crucial for identifying cross-domain timing issues.
Key Points to Address:
Addressing Negative Slacks: The negative slack values indicate that the timing requirements are not being met. Strategies such as adjusting the clock frequencies, optimizing the logic, or improving the placement and routing may be needed.
Specifying Missing Delays: The report highlights missing input and output delays which need to be specified to ensure the timing analysis accurately reflects the real-world operation.
Analyzing Clock Domains: Pay special attention to the cross-domain paths as they often are sources of timing issues.

```

### Perform a place and route of rvlab_fpga_top
Generate again: this time also  locate the reported paths in the RTL(within the timing summary) <br>
![image](https://github.com/SonyaX20/RVlab_SoC/assets/147299585/aeab8169-c650-4d43-8c24-e2d31bd40597) <br>
the resulting schematic and layout with the tool "vivado": <br>
![image](https://github.com/SonyaX20/RVlab_SoC/assets/147299585/9a037694-825a-4655-8e0a-a5a237c095a2)

### Generate the bitfile
rvlab_fpga_top.io_report.txt for any unplaced IOs. Any issues might kill the FPGA. But the result seems fine. <br>
![image](https://github.com/SonyaX20/RVlab_SoC/assets/147299585/6ada80ff-e5f2-45b6-beda-e3393bbbfaf3)

## FPGA netlist simulation
