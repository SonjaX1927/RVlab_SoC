// Generated register defines for ddr_ctrl

#ifndef _DDR_CTRL_REG_DEFS_
#define _DDR_CTRL_REG_DEFS_

// ADC temperature
#define DDR_CTRL_TEMP(id)                        (DDR_CTRL ## id ## _BASE_ADDR  + 0x0)
#define DDR_CTRL_TEMP_OFFSET                     0x0
# define DDR_CTRL_TEMP_RDATA_LSB                 0x0
# define DDR_CTRL_TEMP_RDATA_MASK                0xfff
# define DDR_CTRL_TEMP_RDATA_SIZE                0xc
# define DDR_CTRL_TEMP_RDATA_DEFAULT             0x0

// DDR MIG status
#define DDR_CTRL_STATUS(id)                      (DDR_CTRL ## id ## _BASE_ADDR  + 0x4)
#define DDR_CTRL_STATUS_OFFSET                   0x4
# define DDR_CTRL_STATUS_PRESENT_LSB             0x0
# define DDR_CTRL_STATUS_PRESENT_MASK            0x1
# define DDR_CTRL_STATUS_PRESENT_SIZE            0x1
# define DDR_CTRL_STATUS_PRESENT_DEFAULT         0x0
# define DDR_CTRL_STATUS_CALIB_COMPLETE_LSB      0x1
# define DDR_CTRL_STATUS_CALIB_COMPLETE_MASK     0x1
# define DDR_CTRL_STATUS_CALIB_COMPLETE_SIZE     0x1
# define DDR_CTRL_STATUS_CALIB_COMPLETE_DEFAULT  0x0

// Control
#define DDR_CTRL_CTRL(id)                        (DDR_CTRL ## id ## _BASE_ADDR  + 0x8)
#define DDR_CTRL_CTRL_OFFSET                     0x8
# define DDR_CTRL_CTRL_MIG_RST_N_LSB             0x0
# define DDR_CTRL_CTRL_MIG_RST_N_MASK            0x1
# define DDR_CTRL_CTRL_MIG_RST_N_SIZE            0x1
# define DDR_CTRL_CTRL_MIG_RST_N_DEFAULT         0x0

#endif // _DDR_CTRL_REG_DEFS_
//End generated register defines for ddr_ctrl