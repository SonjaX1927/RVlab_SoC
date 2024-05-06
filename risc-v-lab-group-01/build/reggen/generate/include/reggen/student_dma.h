// Generated register defines for student_dma

#ifndef _STUDENT_DMA_REG_DEFS_
#define _STUDENT_DMA_REG_DEFS_

// Status
#define STUDENT_DMA_STATUS(id)             (STUDENT_DMA ## id ## _BASE_ADDR  + 0x0)
#define STUDENT_DMA_STATUS_OFFSET          0x0
# define STUDENT_DMA_STATUS_VAL_LSB        0x0
# define STUDENT_DMA_STATUS_VAL_MASK       0x3
# define STUDENT_DMA_STATUS_VAL_SIZE       0x2
# define STUDENT_DMA_STATUS_VAL_DEFAULT    0x0

// Pointer to descriptor. Writing while idle will start the operation. Writes while not idle are ignored. Must be 32bit aligned [1:0]=0.
#define STUDENT_DMA_NOW_DADR(id)           (STUDENT_DMA ## id ## _BASE_ADDR  + 0x4)
#define STUDENT_DMA_NOW_DADR_OFFSET        0x4
# define STUDENT_DMA_NOW_DADR_VAL_LSB      0x0
# define STUDENT_DMA_NOW_DADR_VAL_MASK     0xffffffff
# define STUDENT_DMA_NOW_DADR_VAL_SIZE     0x20
# define STUDENT_DMA_NOW_DADR_VAL_DEFAULT  0x0

// Command.
#define STUDENT_DMA_CMD(id)                (STUDENT_DMA ## id ## _BASE_ADDR  + 0x8)
#define STUDENT_DMA_CMD_OFFSET             0x8
# define STUDENT_DMA_CMD_STOP_LSB          0x0
# define STUDENT_DMA_CMD_STOP_MASK         0x1
# define STUDENT_DMA_CMD_STOP_SIZE         0x1
# define STUDENT_DMA_CMD_STOP_DEFAULT      0x0

// number of bytes remaining to be set / copied
#define STUDENT_DMA_LENGTH(id)             (STUDENT_DMA ## id ## _BASE_ADDR  + 0xc)
#define STUDENT_DMA_LENGTH_OFFSET          0xc
# define STUDENT_DMA_LENGTH_VAL_LSB        0x0
# define STUDENT_DMA_LENGTH_VAL_MASK       0xffffffff
# define STUDENT_DMA_LENGTH_VAL_SIZE       0x20
# define STUDENT_DMA_LENGTH_VAL_DEFAULT    0x0

// memset: fill value. memcpy: current read address
#define STUDENT_DMA_SRC_ADR(id)            (STUDENT_DMA ## id ## _BASE_ADDR  + 0x10)
#define STUDENT_DMA_SRC_ADR_OFFSET         0x10
# define STUDENT_DMA_SRC_ADR_VAL_LSB       0x0
# define STUDENT_DMA_SRC_ADR_VAL_MASK      0xffffffff
# define STUDENT_DMA_SRC_ADR_VAL_SIZE      0x20
# define STUDENT_DMA_SRC_ADR_VAL_DEFAULT   0x0

// current write address
#define STUDENT_DMA_DST_ADR(id)            (STUDENT_DMA ## id ## _BASE_ADDR  + 0x14)
#define STUDENT_DMA_DST_ADR_OFFSET         0x14
# define STUDENT_DMA_DST_ADR_VAL_LSB       0x0
# define STUDENT_DMA_DST_ADR_VAL_MASK      0xffffffff
# define STUDENT_DMA_DST_ADR_VAL_SIZE      0x20
# define STUDENT_DMA_DST_ADR_VAL_DEFAULT   0x0

#endif // _STUDENT_DMA_REG_DEFS_
//End generated register defines for student_dma