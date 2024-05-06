// Generated register defines for rv_timer

#ifndef _RV_TIMER_REG_DEFS_
#define _RV_TIMER_REG_DEFS_

// Control register
#define RV_TIMER_CTRL(id)                     (RV_TIMER ## id ## _BASE_ADDR  + 0x0)
#define RV_TIMER_CTRL_OFFSET                  0x0
# define RV_TIMER_CTRL_ACTIVE0_LSB            0x0
# define RV_TIMER_CTRL_ACTIVE0_MASK           0x1
# define RV_TIMER_CTRL_ACTIVE0_SIZE           0x1
# define RV_TIMER_CTRL_ACTIVE0_DEFAULT        0x0

// Configuration for Hart 0
#define RV_TIMER_CFG0(id)                     (RV_TIMER ## id ## _BASE_ADDR  + 0x100)
#define RV_TIMER_CFG0_OFFSET                  0x100
# define RV_TIMER_CFG0_PRESCALE_LSB           0x0
# define RV_TIMER_CFG0_PRESCALE_MASK          0xfff
# define RV_TIMER_CFG0_PRESCALE_SIZE          0xc
# define RV_TIMER_CFG0_PRESCALE_DEFAULT       0x0
# define RV_TIMER_CFG0_STEP_LSB               0x10
# define RV_TIMER_CFG0_STEP_MASK              0xff
# define RV_TIMER_CFG0_STEP_SIZE              0x8
# define RV_TIMER_CFG0_STEP_DEFAULT           0x1

// Timer value Lower
#define RV_TIMER_TIMER_V_LOWER0(id)           (RV_TIMER ## id ## _BASE_ADDR  + 0x104)
#define RV_TIMER_TIMER_V_LOWER0_OFFSET        0x104
# define RV_TIMER_TIMER_V_LOWER0_V_LSB        0x0
# define RV_TIMER_TIMER_V_LOWER0_V_MASK       0xffffffff
# define RV_TIMER_TIMER_V_LOWER0_V_SIZE       0x20
# define RV_TIMER_TIMER_V_LOWER0_V_DEFAULT    0x0

// Timer value Upper
#define RV_TIMER_TIMER_V_UPPER0(id)           (RV_TIMER ## id ## _BASE_ADDR  + 0x108)
#define RV_TIMER_TIMER_V_UPPER0_OFFSET        0x108
# define RV_TIMER_TIMER_V_UPPER0_V_LSB        0x0
# define RV_TIMER_TIMER_V_UPPER0_V_MASK       0xffffffff
# define RV_TIMER_TIMER_V_UPPER0_V_SIZE       0x20
# define RV_TIMER_TIMER_V_UPPER0_V_DEFAULT    0x0

// Timer value Lower
#define RV_TIMER_COMPARE_LOWER0_0(id)         (RV_TIMER ## id ## _BASE_ADDR  + 0x10c)
#define RV_TIMER_COMPARE_LOWER0_0_OFFSET      0x10c
# define RV_TIMER_COMPARE_LOWER0_0_V_LSB      0x0
# define RV_TIMER_COMPARE_LOWER0_0_V_MASK     0xffffffff
# define RV_TIMER_COMPARE_LOWER0_0_V_SIZE     0x20
# define RV_TIMER_COMPARE_LOWER0_0_V_DEFAULT  0xffffffff

// Timer value Upper
#define RV_TIMER_COMPARE_UPPER0_0(id)         (RV_TIMER ## id ## _BASE_ADDR  + 0x110)
#define RV_TIMER_COMPARE_UPPER0_0_OFFSET      0x110
# define RV_TIMER_COMPARE_UPPER0_0_V_LSB      0x0
# define RV_TIMER_COMPARE_UPPER0_0_V_MASK     0xffffffff
# define RV_TIMER_COMPARE_UPPER0_0_V_SIZE     0x20
# define RV_TIMER_COMPARE_UPPER0_0_V_DEFAULT  0xffffffff

// Interrupt Enable
#define RV_TIMER_INTR_ENABLE0(id)             (RV_TIMER ## id ## _BASE_ADDR  + 0x114)
#define RV_TIMER_INTR_ENABLE0_OFFSET          0x114
# define RV_TIMER_INTR_ENABLE0_IE0_LSB        0x0
# define RV_TIMER_INTR_ENABLE0_IE0_MASK       0x1
# define RV_TIMER_INTR_ENABLE0_IE0_SIZE       0x1
# define RV_TIMER_INTR_ENABLE0_IE0_DEFAULT    0x0

// Interrupt Status
#define RV_TIMER_INTR_STATE0(id)              (RV_TIMER ## id ## _BASE_ADDR  + 0x118)
#define RV_TIMER_INTR_STATE0_OFFSET           0x118
# define RV_TIMER_INTR_STATE0_IS0_LSB         0x0
# define RV_TIMER_INTR_STATE0_IS0_MASK        0x1
# define RV_TIMER_INTR_STATE0_IS0_SIZE        0x1
# define RV_TIMER_INTR_STATE0_IS0_DEFAULT     0x0

// Interrupt test register
#define RV_TIMER_INTR_TEST0(id)               (RV_TIMER ## id ## _BASE_ADDR  + 0x11c)
#define RV_TIMER_INTR_TEST0_OFFSET            0x11c
# define RV_TIMER_INTR_TEST0_T0_LSB           0x0
# define RV_TIMER_INTR_TEST0_T0_MASK          0x1
# define RV_TIMER_INTR_TEST0_T0_SIZE          0x1
# define RV_TIMER_INTR_TEST0_T0_DEFAULT       0x0

#endif // _RV_TIMER_REG_DEFS_
//End generated register defines for rv_timer