// Generated register defines for regdemo

#ifndef _REGDEMO_REG_DEFS_
#define _REGDEMO_REG_DEFS_

// shifter output
#define REGDEMO_SHIFTOUT(id)           (REGDEMO ## id ## _BASE_ADDR  + 0x0)
#define REGDEMO_SHIFTOUT_OFFSET        0x0
# define REGDEMO_SHIFTOUT_VAL_LSB      0x0
# define REGDEMO_SHIFTOUT_VAL_MASK     0xffffffff
# define REGDEMO_SHIFTOUT_VAL_SIZE     0x20
# define REGDEMO_SHIFTOUT_VAL_DEFAULT  0x0

// Shifter input
#define REGDEMO_SHIFTIN(id)            (REGDEMO ## id ## _BASE_ADDR  + 0x4)
#define REGDEMO_SHIFTIN_OFFSET         0x4
# define REGDEMO_SHIFTIN_VAL_LSB       0x0
# define REGDEMO_SHIFTIN_VAL_MASK      0xffffffff
# define REGDEMO_SHIFTIN_VAL_SIZE      0x20
# define REGDEMO_SHIFTIN_VAL_DEFAULT   0x0

// Shifter config
#define REGDEMO_SHIFTCFG(id)           (REGDEMO ## id ## _BASE_ADDR  + 0x8)
#define REGDEMO_SHIFTCFG_OFFSET        0x8
# define REGDEMO_SHIFTCFG_DIR_LSB      0x0
# define REGDEMO_SHIFTCFG_DIR_MASK     0x1
# define REGDEMO_SHIFTCFG_DIR_SIZE     0x1
# define REGDEMO_SHIFTCFG_DIR_DEFAULT  0x0
# define REGDEMO_SHIFTCFG_AMT_LSB      0x1
# define REGDEMO_SHIFTCFG_AMT_MASK     0x1f
# define REGDEMO_SHIFTCFG_AMT_SIZE     0x5
# define REGDEMO_SHIFTCFG_AMT_DEFAULT  0x0

#endif // _REGDEMO_REG_DEFS_
//End generated register defines for regdemo