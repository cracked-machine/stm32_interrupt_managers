#ifndef __MOCK_CMSIS_HPP__
#define __MOCK_CMSIS_HPP__

#define __IO volatile
#include <stdint.h>

typedef struct
{
  __IO uint32_t RTSR1;          /*!< EXTI Rising Trigger Selection Register 1,        Address offset:   0x00 */
  __IO uint32_t FTSR1;          /*!< EXTI Falling Trigger Selection Register 1,       Address offset:   0x04 */
  __IO uint32_t SWIER1;         /*!< EXTI Software Interrupt event Register 1,        Address offset:   0x08 */
  __IO uint32_t RPR1;           /*!< EXTI Rising Pending Register 1,                  Address offset:   0x0C */
  __IO uint32_t FPR1;           /*!< EXTI Falling Pending Register 1,                 Address offset:   0x10 */
       uint32_t RESERVED1[3];   /*!< Reserved 1,                                                0x14 -- 0x1C */
  __IO uint32_t RTSR2;          /*!< EXTI Rising Trigger Selection Register 2,        Address offset:   0x20 */
  __IO uint32_t FTSR2;          /*!< EXTI Falling Trigger Selection Register 2,       Address offset:   0x24 */
  __IO uint32_t SWIER2;         /*!< EXTI Software Interrupt event Register 2,        Address offset:   0x28 */
  __IO uint32_t RPR2;           /*!< EXTI Rising Pending Register 2,                  Address offset:   0x2C */
  __IO uint32_t FPR2;           /*!< EXTI Falling Pending Register 2,                 Address offset:   0x30 */
       uint32_t RESERVED3[11];  /*!< Reserved 3,                                                0x34 -- 0x5C */
  __IO uint32_t EXTICR[4];      /*!< EXTI External Interrupt Configuration Register,            0x60 -- 0x6C */
       uint32_t RESERVED4[4];   /*!< Reserved 4,                                                0x70 -- 0x7C */
  __IO uint32_t IMR1;           /*!< EXTI Interrupt Mask Register 1,                  Address offset:   0x80 */
  __IO uint32_t EMR1;           /*!< EXTI Event Mask Register 1,                      Address offset:   0x84 */
       uint32_t RESERVED5[2];   /*!< Reserved 5,                                                0x88 -- 0x8C */
  __IO uint32_t IMR2;           /*!< EXTI Interrupt Mask Register 2,                  Address offset:   0x90 */
  __IO uint32_t EMR2;           /*!< EXTI Event Mask Register 2,                      Address offset:   0x94 */
} EXTI_TypeDef;

#define PERIPH_BASE           (0x40000000UL)  /*!< Peripheral base address */
#define APBPERIPH_BASE        (PERIPH_BASE)
#define AHBPERIPH_BASE        (PERIPH_BASE + 0x00020000UL)
#define EXTI_BASE             (AHBPERIPH_BASE + 0x00001800UL)
#define EXTI                ((EXTI_TypeDef *) EXTI_BASE)

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for EXTI_RTSR1 register  ******************/
#define EXTI_RTSR1_RT0_Pos           (0U)
#define EXTI_RTSR1_RT0_Msk           (0x1UL << EXTI_RTSR1_RT0_Pos)             /*!< 0x00000001 */
#define EXTI_RTSR1_RT0               EXTI_RTSR1_RT0_Msk                        /*!< Rising trigger configuration for input line 0 */
#define EXTI_RTSR1_RT1_Pos           (1U)
#define EXTI_RTSR1_RT1_Msk           (0x1UL << EXTI_RTSR1_RT1_Pos)             /*!< 0x00000002 */
#define EXTI_RTSR1_RT1               EXTI_RTSR1_RT1_Msk                        /*!< Rising trigger configuration for input line 1 */
#define EXTI_RTSR1_RT2_Pos           (2U)
#define EXTI_RTSR1_RT2_Msk           (0x1UL << EXTI_RTSR1_RT2_Pos)             /*!< 0x00000004 */
#define EXTI_RTSR1_RT2               EXTI_RTSR1_RT2_Msk                        /*!< Rising trigger configuration for input line 2 */
#define EXTI_RTSR1_RT3_Pos           (3U)
#define EXTI_RTSR1_RT3_Msk           (0x1UL << EXTI_RTSR1_RT3_Pos)             /*!< 0x00000008 */
#define EXTI_RTSR1_RT3               EXTI_RTSR1_RT3_Msk                        /*!< Rising trigger configuration for input line 3 */
#define EXTI_RTSR1_RT4_Pos           (4U)
#define EXTI_RTSR1_RT4_Msk           (0x1UL << EXTI_RTSR1_RT4_Pos)             /*!< 0x00000010 */
#define EXTI_RTSR1_RT4               EXTI_RTSR1_RT4_Msk                        /*!< Rising trigger configuration for input line 4 */
#define EXTI_RTSR1_RT5_Pos           (5U)
#define EXTI_RTSR1_RT5_Msk           (0x1UL << EXTI_RTSR1_RT5_Pos)             /*!< 0x00000020 */
#define EXTI_RTSR1_RT5               EXTI_RTSR1_RT5_Msk                        /*!< Rising trigger configuration for input line 5 */
#define EXTI_RTSR1_RT6_Pos           (6U)
#define EXTI_RTSR1_RT6_Msk           (0x1UL << EXTI_RTSR1_RT6_Pos)             /*!< 0x00000040 */
#define EXTI_RTSR1_RT6               EXTI_RTSR1_RT6_Msk                        /*!< Rising trigger configuration for input line 6 */
#define EXTI_RTSR1_RT7_Pos           (7U)
#define EXTI_RTSR1_RT7_Msk           (0x1UL << EXTI_RTSR1_RT7_Pos)             /*!< 0x00000080 */
#define EXTI_RTSR1_RT7               EXTI_RTSR1_RT7_Msk                        /*!< Rising trigger configuration for input line 7 */
#define EXTI_RTSR1_RT8_Pos           (8U)
#define EXTI_RTSR1_RT8_Msk           (0x1UL << EXTI_RTSR1_RT8_Pos)             /*!< 0x00000100 */
#define EXTI_RTSR1_RT8               EXTI_RTSR1_RT8_Msk                        /*!< Rising trigger configuration for input line 8 */
#define EXTI_RTSR1_RT9_Pos           (9U)
#define EXTI_RTSR1_RT9_Msk           (0x1UL << EXTI_RTSR1_RT9_Pos)             /*!< 0x00000200 */
#define EXTI_RTSR1_RT9               EXTI_RTSR1_RT9_Msk                        /*!< Rising trigger configuration for input line 9 */
#define EXTI_RTSR1_RT10_Pos          (10U)
#define EXTI_RTSR1_RT10_Msk          (0x1UL << EXTI_RTSR1_RT10_Pos)            /*!< 0x00000400 */
#define EXTI_RTSR1_RT10              EXTI_RTSR1_RT10_Msk                       /*!< Rising trigger configuration for input line 10 */
#define EXTI_RTSR1_RT11_Pos          (11U)
#define EXTI_RTSR1_RT11_Msk          (0x1UL << EXTI_RTSR1_RT11_Pos)            /*!< 0x00000800 */
#define EXTI_RTSR1_RT11              EXTI_RTSR1_RT11_Msk                       /*!< Rising trigger configuration for input line 11 */
#define EXTI_RTSR1_RT12_Pos          (12U)
#define EXTI_RTSR1_RT12_Msk          (0x1UL << EXTI_RTSR1_RT12_Pos)            /*!< 0x00001000 */
#define EXTI_RTSR1_RT12              EXTI_RTSR1_RT12_Msk                       /*!< Rising trigger configuration for input line 12 */
#define EXTI_RTSR1_RT13_Pos          (13U)
#define EXTI_RTSR1_RT13_Msk          (0x1UL << EXTI_RTSR1_RT13_Pos)            /*!< 0x00002000 */
#define EXTI_RTSR1_RT13              EXTI_RTSR1_RT13_Msk                       /*!< Rising trigger configuration for input line 13 */
#define EXTI_RTSR1_RT14_Pos          (14U)
#define EXTI_RTSR1_RT14_Msk          (0x1UL << EXTI_RTSR1_RT14_Pos)            /*!< 0x00004000 */
#define EXTI_RTSR1_RT14              EXTI_RTSR1_RT14_Msk                       /*!< Rising trigger configuration for input line 14 */
#define EXTI_RTSR1_RT15_Pos          (15U)
#define EXTI_RTSR1_RT15_Msk          (0x1UL << EXTI_RTSR1_RT15_Pos)            /*!< 0x00008000 */
#define EXTI_RTSR1_RT15              EXTI_RTSR1_RT15_Msk                       /*!< Rising trigger configuration for input line 15 */
#define EXTI_RTSR1_RT16_Pos          (16U)
#define EXTI_RTSR1_RT16_Msk          (0x1UL << EXTI_RTSR1_RT16_Pos)            /*!< 0x00010000 */
#define EXTI_RTSR1_RT16              EXTI_RTSR1_RT16_Msk                       /*!< Rising trigger configuration for input line 16 */
#define EXTI_RTSR1_RT17_Pos          (17U)
#define EXTI_RTSR1_RT17_Msk          (0x1UL << EXTI_RTSR1_RT17_Pos)            /*!< 0x00020000 */
#define EXTI_RTSR1_RT17              EXTI_RTSR1_RT17_Msk                       /*!< Rising trigger configuration for input line 17 */
#define EXTI_RTSR1_RT18_Pos          (18U)
#define EXTI_RTSR1_RT18_Msk          (0x1UL << EXTI_RTSR1_RT18_Pos)            /*!< 0x00040000 */
#define EXTI_RTSR1_RT18              EXTI_RTSR1_RT18_Msk                       /*!< Rising trigger configuration for input line 18 */
#define EXTI_RTSR1_RT20_Pos          (20U)
#define EXTI_RTSR1_RT20_Msk          (0x1UL << EXTI_RTSR1_RT20_Pos)            /*!< 0x00100000 */
#define EXTI_RTSR1_RT20              EXTI_RTSR1_RT20_Msk                       /*!< Rising trigger configuration for input line 20 */

/******************  Bit definition for EXTI_FTSR1 register  ******************/
#define EXTI_FTSR1_FT0_Pos           (0U)
#define EXTI_FTSR1_FT0_Msk           (0x1UL << EXTI_FTSR1_FT0_Pos)             /*!< 0x00000001 */
#define EXTI_FTSR1_FT0               EXTI_FTSR1_FT0_Msk                        /*!< Falling trigger configuration for input line 0 */
#define EXTI_FTSR1_FT1_Pos           (1U)
#define EXTI_FTSR1_FT1_Msk           (0x1UL << EXTI_FTSR1_FT1_Pos)             /*!< 0x00000002 */
#define EXTI_FTSR1_FT1               EXTI_FTSR1_FT1_Msk                        /*!< Falling trigger configuration for input line 1 */
#define EXTI_FTSR1_FT2_Pos           (2U)
#define EXTI_FTSR1_FT2_Msk           (0x1UL << EXTI_FTSR1_FT2_Pos)             /*!< 0x00000004 */
#define EXTI_FTSR1_FT2               EXTI_FTSR1_FT2_Msk                        /*!< Falling trigger configuration for input line 2 */
#define EXTI_FTSR1_FT3_Pos           (3U)
#define EXTI_FTSR1_FT3_Msk           (0x1UL << EXTI_FTSR1_FT3_Pos)             /*!< 0x00000008 */
#define EXTI_FTSR1_FT3               EXTI_FTSR1_FT3_Msk                        /*!< Falling trigger configuration for input line 3 */
#define EXTI_FTSR1_FT4_Pos           (4U)
#define EXTI_FTSR1_FT4_Msk           (0x1UL << EXTI_FTSR1_FT4_Pos)             /*!< 0x00000010 */
#define EXTI_FTSR1_FT4               EXTI_FTSR1_FT4_Msk                        /*!< Falling trigger configuration for input line 4 */
#define EXTI_FTSR1_FT5_Pos           (5U)
#define EXTI_FTSR1_FT5_Msk           (0x1UL << EXTI_FTSR1_FT5_Pos)             /*!< 0x00000020 */
#define EXTI_FTSR1_FT5               EXTI_FTSR1_FT5_Msk                        /*!< Falling trigger configuration for input line 5 */
#define EXTI_FTSR1_FT6_Pos           (6U)
#define EXTI_FTSR1_FT6_Msk           (0x1UL << EXTI_FTSR1_FT6_Pos)             /*!< 0x00000040 */
#define EXTI_FTSR1_FT6               EXTI_FTSR1_FT6_Msk                        /*!< Falling trigger configuration for input line 6 */
#define EXTI_FTSR1_FT7_Pos           (7U)
#define EXTI_FTSR1_FT7_Msk           (0x1UL << EXTI_FTSR1_FT7_Pos)             /*!< 0x00000080 */
#define EXTI_FTSR1_FT7               EXTI_FTSR1_FT7_Msk                        /*!< Falling trigger configuration for input line 7 */
#define EXTI_FTSR1_FT8_Pos           (8U)
#define EXTI_FTSR1_FT8_Msk           (0x1UL << EXTI_FTSR1_FT8_Pos)             /*!< 0x00000100 */
#define EXTI_FTSR1_FT8               EXTI_FTSR1_FT8_Msk                        /*!< Falling trigger configuration for input line 8 */
#define EXTI_FTSR1_FT9_Pos           (9U)
#define EXTI_FTSR1_FT9_Msk           (0x1UL << EXTI_FTSR1_FT9_Pos)             /*!< 0x00000200 */
#define EXTI_FTSR1_FT9               EXTI_FTSR1_FT9_Msk                        /*!< Falling trigger configuration for input line 9 */
#define EXTI_FTSR1_FT10_Pos          (10U)
#define EXTI_FTSR1_FT10_Msk          (0x1UL << EXTI_FTSR1_FT10_Pos)            /*!< 0x00000400 */
#define EXTI_FTSR1_FT10              EXTI_FTSR1_FT10_Msk                       /*!< Falling trigger configuration for input line 10 */
#define EXTI_FTSR1_FT11_Pos          (11U)
#define EXTI_FTSR1_FT11_Msk          (0x1UL << EXTI_FTSR1_FT11_Pos)            /*!< 0x00000800 */
#define EXTI_FTSR1_FT11              EXTI_FTSR1_FT11_Msk                       /*!< Falling trigger configuration for input line 11 */
#define EXTI_FTSR1_FT12_Pos          (12U)
#define EXTI_FTSR1_FT12_Msk          (0x1UL << EXTI_FTSR1_FT12_Pos)            /*!< 0x00001000 */
#define EXTI_FTSR1_FT12              EXTI_FTSR1_FT12_Msk                       /*!< Falling trigger configuration for input line 12 */
#define EXTI_FTSR1_FT13_Pos          (13U)
#define EXTI_FTSR1_FT13_Msk          (0x1UL << EXTI_FTSR1_FT13_Pos)            /*!< 0x00002000 */
#define EXTI_FTSR1_FT13              EXTI_FTSR1_FT13_Msk                       /*!< Falling trigger configuration for input line 13 */
#define EXTI_FTSR1_FT14_Pos          (14U)
#define EXTI_FTSR1_FT14_Msk          (0x1UL << EXTI_FTSR1_FT14_Pos)            /*!< 0x00004000 */
#define EXTI_FTSR1_FT14              EXTI_FTSR1_FT14_Msk                       /*!< Falling trigger configuration for input line 14 */
#define EXTI_FTSR1_FT15_Pos          (15U)
#define EXTI_FTSR1_FT15_Msk          (0x1UL << EXTI_FTSR1_FT15_Pos)            /*!< 0x00008000 */
#define EXTI_FTSR1_FT15              EXTI_FTSR1_FT15_Msk                       /*!< Falling trigger configuration for input line 15 */
#define EXTI_FTSR1_FT16_Pos          (16U)
#define EXTI_FTSR1_FT16_Msk          (0x1UL << EXTI_FTSR1_FT16_Pos)            /*!< 0x00010000 */
#define EXTI_FTSR1_FT16              EXTI_FTSR1_FT16_Msk                       /*!< Falling trigger configuration for input line 16 */
#define EXTI_FTSR1_FT17_Pos          (17U)
#define EXTI_FTSR1_FT17_Msk          (0x1UL << EXTI_FTSR1_FT17_Pos)            /*!< 0x00020000 */
#define EXTI_FTSR1_FT17              EXTI_FTSR1_FT17_Msk                       /*!< Falling trigger configuration for input line 17 */
#define EXTI_FTSR1_FT18_Pos          (18U)
#define EXTI_FTSR1_FT18_Msk          (0x1UL << EXTI_FTSR1_FT18_Pos)            /*!< 0x00040000 */
#define EXTI_FTSR1_FT18              EXTI_FTSR1_FT18_Msk                       /*!< Falling trigger configuration for input line 18 */
#define EXTI_FTSR1_FT20_Pos          (20U)
#define EXTI_FTSR1_FT20_Msk          (0x1UL << EXTI_FTSR1_FT20_Pos)            /*!< 0x00100000 */
#define EXTI_FTSR1_FT20              EXTI_FTSR1_FT20_Msk                       /*!< Falling trigger configuration for input line 20 */

/******************  Bit definition for EXTI_SWIER1 register  *****************/
#define EXTI_SWIER1_SWI0_Pos         (0U)
#define EXTI_SWIER1_SWI0_Msk         (0x1UL << EXTI_SWIER1_SWI0_Pos)           /*!< 0x00000001 */
#define EXTI_SWIER1_SWI0             EXTI_SWIER1_SWI0_Msk                      /*!< Software Interrupt on line 0 */
#define EXTI_SWIER1_SWI1_Pos         (1U)
#define EXTI_SWIER1_SWI1_Msk         (0x1UL << EXTI_SWIER1_SWI1_Pos)           /*!< 0x00000002 */
#define EXTI_SWIER1_SWI1             EXTI_SWIER1_SWI1_Msk                      /*!< Software Interrupt on line 1 */
#define EXTI_SWIER1_SWI2_Pos         (2U)
#define EXTI_SWIER1_SWI2_Msk         (0x1UL << EXTI_SWIER1_SWI2_Pos)           /*!< 0x00000004 */
#define EXTI_SWIER1_SWI2             EXTI_SWIER1_SWI2_Msk                      /*!< Software Interrupt on line 2 */
#define EXTI_SWIER1_SWI3_Pos         (3U)
#define EXTI_SWIER1_SWI3_Msk         (0x1UL << EXTI_SWIER1_SWI3_Pos)           /*!< 0x00000008 */
#define EXTI_SWIER1_SWI3             EXTI_SWIER1_SWI3_Msk                      /*!< Software Interrupt on line 3 */
#define EXTI_SWIER1_SWI4_Pos         (4U)
#define EXTI_SWIER1_SWI4_Msk         (0x1UL << EXTI_SWIER1_SWI4_Pos)           /*!< 0x00000010 */
#define EXTI_SWIER1_SWI4             EXTI_SWIER1_SWI4_Msk                      /*!< Software Interrupt on line 4 */
#define EXTI_SWIER1_SWI5_Pos         (5U)
#define EXTI_SWIER1_SWI5_Msk         (0x1UL << EXTI_SWIER1_SWI5_Pos)           /*!< 0x00000020 */
#define EXTI_SWIER1_SWI5             EXTI_SWIER1_SWI5_Msk                      /*!< Software Interrupt on line 5 */
#define EXTI_SWIER1_SWI6_Pos         (6U)
#define EXTI_SWIER1_SWI6_Msk         (0x1UL << EXTI_SWIER1_SWI6_Pos)           /*!< 0x00000040 */
#define EXTI_SWIER1_SWI6             EXTI_SWIER1_SWI6_Msk                      /*!< Software Interrupt on line 6 */
#define EXTI_SWIER1_SWI7_Pos         (7U)
#define EXTI_SWIER1_SWI7_Msk         (0x1UL << EXTI_SWIER1_SWI7_Pos)           /*!< 0x00000080 */
#define EXTI_SWIER1_SWI7             EXTI_SWIER1_SWI7_Msk                      /*!< Software Interrupt on line 7 */
#define EXTI_SWIER1_SWI8_Pos         (8U)
#define EXTI_SWIER1_SWI8_Msk         (0x1UL << EXTI_SWIER1_SWI8_Pos)           /*!< 0x00000100 */
#define EXTI_SWIER1_SWI8             EXTI_SWIER1_SWI8_Msk                      /*!< Software Interrupt on line 8 */
#define EXTI_SWIER1_SWI9_Pos         (9U)
#define EXTI_SWIER1_SWI9_Msk         (0x1UL << EXTI_SWIER1_SWI9_Pos)           /*!< 0x00000200 */
#define EXTI_SWIER1_SWI9             EXTI_SWIER1_SWI9_Msk                      /*!< Software Interrupt on line 9 */
#define EXTI_SWIER1_SWI10_Pos        (10U)
#define EXTI_SWIER1_SWI10_Msk        (0x1UL << EXTI_SWIER1_SWI10_Pos)          /*!< 0x00000400 */
#define EXTI_SWIER1_SWI10            EXTI_SWIER1_SWI10_Msk                     /*!< Software Interrupt on line 10 */
#define EXTI_SWIER1_SWI11_Pos        (11U)
#define EXTI_SWIER1_SWI11_Msk        (0x1UL << EXTI_SWIER1_SWI11_Pos)          /*!< 0x00000800 */
#define EXTI_SWIER1_SWI11            EXTI_SWIER1_SWI11_Msk                     /*!< Software Interrupt on line 11 */
#define EXTI_SWIER1_SWI12_Pos        (12U)
#define EXTI_SWIER1_SWI12_Msk        (0x1UL << EXTI_SWIER1_SWI12_Pos)          /*!< 0x00001000 */
#define EXTI_SWIER1_SWI12            EXTI_SWIER1_SWI12_Msk                     /*!< Software Interrupt on line 12 */
#define EXTI_SWIER1_SWI13_Pos        (13U)
#define EXTI_SWIER1_SWI13_Msk        (0x1UL << EXTI_SWIER1_SWI13_Pos)          /*!< 0x00002000 */
#define EXTI_SWIER1_SWI13            EXTI_SWIER1_SWI13_Msk                     /*!< Software Interrupt on line 13 */
#define EXTI_SWIER1_SWI14_Pos        (14U)
#define EXTI_SWIER1_SWI14_Msk        (0x1UL << EXTI_SWIER1_SWI14_Pos)          /*!< 0x00004000 */
#define EXTI_SWIER1_SWI14            EXTI_SWIER1_SWI14_Msk                     /*!< Software Interrupt on line 14 */
#define EXTI_SWIER1_SWI15_Pos        (15U)
#define EXTI_SWIER1_SWI15_Msk        (0x1UL << EXTI_SWIER1_SWI15_Pos)          /*!< 0x00008000 */
#define EXTI_SWIER1_SWI15            EXTI_SWIER1_SWI15_Msk                     /*!< Software Interrupt on line 15 */
#define EXTI_SWIER1_SWI16_Pos        (16U)
#define EXTI_SWIER1_SWI16_Msk        (0x1UL << EXTI_SWIER1_SWI16_Pos)          /*!< 0x00010000 */
#define EXTI_SWIER1_SWI16            EXTI_SWIER1_SWI16_Msk                     /*!< Software Interrupt on line 16 */
#define EXTI_SWIER1_SWI17_Pos        (17U)
#define EXTI_SWIER1_SWI17_Msk        (0x1UL << EXTI_SWIER1_SWI17_Pos)          /*!< 0x00020000 */
#define EXTI_SWIER1_SWI17            EXTI_SWIER1_SWI17_Msk                     /*!< Software Interrupt on line 17 */
#define EXTI_SWIER1_SWI18_Pos        (18U)
#define EXTI_SWIER1_SWI18_Msk        (0x1UL << EXTI_SWIER1_SWI18_Pos)          /*!< 0x00040000 */
#define EXTI_SWIER1_SWI18            EXTI_SWIER1_SWI18_Msk                     /*!< Software Interrupt on line 18 */
#define EXTI_SWIER1_SWI20_Pos        (20U)
#define EXTI_SWIER1_SWI20_Msk        (0x1UL << EXTI_SWIER1_SWI20_Pos)          /*!< 0x00100000 */
#define EXTI_SWIER1_SWI20            EXTI_SWIER1_SWI20_Msk                     /*!< Software Interrupt on line 20 */

/*******************  Bit definition for EXTI_RPR1 register  ******************/
#define EXTI_RPR1_RPIF0_Pos          (0U)
#define EXTI_RPR1_RPIF0_Msk          (0x1UL << EXTI_RPR1_RPIF0_Pos)            /*!< 0x00000001 */
#define EXTI_RPR1_RPIF0              EXTI_RPR1_RPIF0_Msk                       /*!< Rising Pending Interrupt Flag on line 0 */
#define EXTI_RPR1_RPIF1_Pos          (1U)
#define EXTI_RPR1_RPIF1_Msk          (0x1UL << EXTI_RPR1_RPIF1_Pos)            /*!< 0x00000002 */
#define EXTI_RPR1_RPIF1              EXTI_RPR1_RPIF1_Msk                       /*!< Rising Pending Interrupt Flag on line 1 */
#define EXTI_RPR1_RPIF2_Pos          (2U)
#define EXTI_RPR1_RPIF2_Msk          (0x1UL << EXTI_RPR1_RPIF2_Pos)            /*!< 0x00000004 */
#define EXTI_RPR1_RPIF2              EXTI_RPR1_RPIF2_Msk                       /*!< Rising Pending Interrupt Flag on line 2 */
#define EXTI_RPR1_RPIF3_Pos          (3U)
#define EXTI_RPR1_RPIF3_Msk          (0x1UL << EXTI_RPR1_RPIF3_Pos)            /*!< 0x00000008 */
#define EXTI_RPR1_RPIF3              EXTI_RPR1_RPIF3_Msk                       /*!< Rising Pending Interrupt Flag on line 3 */
#define EXTI_RPR1_RPIF4_Pos          (4U)
#define EXTI_RPR1_RPIF4_Msk          (0x1UL << EXTI_RPR1_RPIF4_Pos)            /*!< 0x00000010 */
#define EXTI_RPR1_RPIF4              EXTI_RPR1_RPIF4_Msk                       /*!< Rising Pending Interrupt Flag on line 4 */
#define EXTI_RPR1_RPIF5_Pos          (5U)
#define EXTI_RPR1_RPIF5_Msk          (0x1UL << EXTI_RPR1_RPIF5_Pos)            /*!< 0x00000020 */
#define EXTI_RPR1_RPIF5              EXTI_RPR1_RPIF5_Msk                       /*!< Rising Pending Interrupt Flag on line 5 */
#define EXTI_RPR1_RPIF6_Pos          (6U)
#define EXTI_RPR1_RPIF6_Msk          (0x1UL << EXTI_RPR1_RPIF6_Pos)            /*!< 0x00000040 */
#define EXTI_RPR1_RPIF6              EXTI_RPR1_RPIF6_Msk                       /*!< Rising Pending Interrupt Flag on line 6 */
#define EXTI_RPR1_RPIF7_Pos          (7U)
#define EXTI_RPR1_RPIF7_Msk          (0x1UL << EXTI_RPR1_RPIF7_Pos)            /*!< 0x00000080 */
#define EXTI_RPR1_RPIF7              EXTI_RPR1_RPIF7_Msk                       /*!< Rising Pending Interrupt Flag on line 7 */
#define EXTI_RPR1_RPIF8_Pos          (8U)
#define EXTI_RPR1_RPIF8_Msk          (0x1UL << EXTI_RPR1_RPIF8_Pos)            /*!< 0x00000100 */
#define EXTI_RPR1_RPIF8              EXTI_RPR1_RPIF8_Msk                       /*!< Rising Pending Interrupt Flag on line 8 */
#define EXTI_RPR1_RPIF9_Pos          (9U)
#define EXTI_RPR1_RPIF9_Msk          (0x1UL << EXTI_RPR1_RPIF9_Pos)            /*!< 0x00000200 */
#define EXTI_RPR1_RPIF9              EXTI_RPR1_RPIF9_Msk                       /*!< Rising Pending Interrupt Flag on line 9 */
#define EXTI_RPR1_RPIF10_Pos         (10U)
#define EXTI_RPR1_RPIF10_Msk         (0x1UL << EXTI_RPR1_RPIF10_Pos)           /*!< 0x00000400 */
#define EXTI_RPR1_RPIF10             EXTI_RPR1_RPIF10_Msk                      /*!< Rising Pending Interrupt Flag on line 10 */
#define EXTI_RPR1_RPIF11_Pos         (11U)
#define EXTI_RPR1_RPIF11_Msk         (0x1UL << EXTI_RPR1_RPIF11_Pos)           /*!< 0x00000800 */
#define EXTI_RPR1_RPIF11             EXTI_RPR1_RPIF11_Msk                      /*!< Rising Pending Interrupt Flag on line 11 */
#define EXTI_RPR1_RPIF12_Pos         (12U)
#define EXTI_RPR1_RPIF12_Msk         (0x1UL << EXTI_RPR1_RPIF12_Pos)           /*!< 0x00001000 */
#define EXTI_RPR1_RPIF12             EXTI_RPR1_RPIF12_Msk                      /*!< Rising Pending Interrupt Flag on line 12 */
#define EXTI_RPR1_RPIF13_Pos         (13U)
#define EXTI_RPR1_RPIF13_Msk         (0x1UL << EXTI_RPR1_RPIF13_Pos)           /*!< 0x00002000 */
#define EXTI_RPR1_RPIF13             EXTI_RPR1_RPIF13_Msk                      /*!< Rising Pending Interrupt Flag on line 13 */
#define EXTI_RPR1_RPIF14_Pos         (14U)
#define EXTI_RPR1_RPIF14_Msk         (0x1UL << EXTI_RPR1_RPIF14_Pos)           /*!< 0x00004000 */
#define EXTI_RPR1_RPIF14             EXTI_RPR1_RPIF14_Msk                      /*!< Rising Pending Interrupt Flag on line 14 */
#define EXTI_RPR1_RPIF15_Pos         (15U)
#define EXTI_RPR1_RPIF15_Msk         (0x1UL << EXTI_RPR1_RPIF15_Pos)           /*!< 0x00008000 */
#define EXTI_RPR1_RPIF15             EXTI_RPR1_RPIF15_Msk                      /*!< Rising Pending Interrupt Flag on line 15 */
#define EXTI_RPR1_RPIF16_Pos         (16U)
#define EXTI_RPR1_RPIF16_Msk         (0x1UL << EXTI_RPR1_RPIF16_Pos)           /*!< 0x00010000 */
#define EXTI_RPR1_RPIF16             EXTI_RPR1_RPIF16_Msk                      /*!< Rising Pending Interrupt Flag on line 16 */
#define EXTI_RPR1_RPIF17_Pos         (17U)
#define EXTI_RPR1_RPIF17_Msk         (0x1UL << EXTI_RPR1_RPIF17_Pos)           /*!< 0x00020000 */
#define EXTI_RPR1_RPIF17             EXTI_RPR1_RPIF17_Msk                      /*!< Rising Pending Interrupt Flag on line 17 */
#define EXTI_RPR1_RPIF18_Pos         (18U)
#define EXTI_RPR1_RPIF18_Msk         (0x1UL << EXTI_RPR1_RPIF18_Pos)           /*!< 0x00040000 */
#define EXTI_RPR1_RPIF18             EXTI_RPR1_RPIF18_Msk                      /*!< Rising Pending Interrupt Flag on line 18 */
#define EXTI_RPR1_RPIF20_Pos         (20U)
#define EXTI_RPR1_RPIF20_Msk         (0x1UL << EXTI_RPR1_RPIF20_Pos)           /*!< 0x00100000 */
#define EXTI_RPR1_RPIF20             EXTI_RPR1_RPIF20_Msk                      /*!< Rising Pending Interrupt Flag on line 20 */

/*******************  Bit definition for EXTI_FPR1 register  ******************/
#define EXTI_FPR1_FPIF0_Pos          (0U)
#define EXTI_FPR1_FPIF0_Msk          (0x1UL << EXTI_FPR1_FPIF0_Pos)            /*!< 0x00000001 */
#define EXTI_FPR1_FPIF0              EXTI_FPR1_FPIF0_Msk                       /*!< Falling Pending Interrupt Flag on line 0 */
#define EXTI_FPR1_FPIF1_Pos          (1U)
#define EXTI_FPR1_FPIF1_Msk          (0x1UL << EXTI_FPR1_FPIF1_Pos)            /*!< 0x00000002 */
#define EXTI_FPR1_FPIF1              EXTI_FPR1_FPIF1_Msk                       /*!< Falling Pending Interrupt Flag on line 1 */
#define EXTI_FPR1_FPIF2_Pos          (2U)
#define EXTI_FPR1_FPIF2_Msk          (0x1UL << EXTI_FPR1_FPIF2_Pos)            /*!< 0x00000004 */
#define EXTI_FPR1_FPIF2              EXTI_FPR1_FPIF2_Msk                       /*!< Falling Pending Interrupt Flag on line 2 */
#define EXTI_FPR1_FPIF3_Pos          (3U)
#define EXTI_FPR1_FPIF3_Msk          (0x1UL << EXTI_FPR1_FPIF3_Pos)            /*!< 0x00000008 */
#define EXTI_FPR1_FPIF3              EXTI_FPR1_FPIF3_Msk                       /*!< Falling Pending Interrupt Flag on line 3 */
#define EXTI_FPR1_FPIF4_Pos          (4U)
#define EXTI_FPR1_FPIF4_Msk          (0x1UL << EXTI_FPR1_FPIF4_Pos)            /*!< 0x00000010 */
#define EXTI_FPR1_FPIF4              EXTI_FPR1_FPIF4_Msk                       /*!< Falling Pending Interrupt Flag on line 4 */
#define EXTI_FPR1_FPIF5_Pos          (5U)
#define EXTI_FPR1_FPIF5_Msk          (0x1UL << EXTI_FPR1_FPIF5_Pos)            /*!< 0x00000020 */
#define EXTI_FPR1_FPIF5              EXTI_FPR1_FPIF5_Msk                       /*!< Falling Pending Interrupt Flag on line 5 */
#define EXTI_FPR1_FPIF6_Pos          (6U)
#define EXTI_FPR1_FPIF6_Msk          (0x1UL << EXTI_FPR1_FPIF6_Pos)            /*!< 0x00000040 */
#define EXTI_FPR1_FPIF6              EXTI_FPR1_FPIF6_Msk                       /*!< Falling Pending Interrupt Flag on line 6 */
#define EXTI_FPR1_FPIF7_Pos          (7U)
#define EXTI_FPR1_FPIF7_Msk          (0x1UL << EXTI_FPR1_FPIF7_Pos)            /*!< 0x00000080 */
#define EXTI_FPR1_FPIF7              EXTI_FPR1_FPIF7_Msk                       /*!< Falling Pending Interrupt Flag on line 7 */
#define EXTI_FPR1_FPIF8_Pos          (8U)
#define EXTI_FPR1_FPIF8_Msk          (0x1UL << EXTI_FPR1_FPIF8_Pos)            /*!< 0x00000100 */
#define EXTI_FPR1_FPIF8              EXTI_FPR1_FPIF8_Msk                       /*!< Falling Pending Interrupt Flag on line 8 */
#define EXTI_FPR1_FPIF9_Pos          (9U)
#define EXTI_FPR1_FPIF9_Msk          (0x1UL << EXTI_FPR1_FPIF9_Pos)            /*!< 0x00000200 */
#define EXTI_FPR1_FPIF9              EXTI_FPR1_FPIF9_Msk                       /*!< Falling Pending Interrupt Flag on line 9 */
#define EXTI_FPR1_FPIF10_Pos         (10U)
#define EXTI_FPR1_FPIF10_Msk         (0x1UL << EXTI_FPR1_FPIF10_Pos)           /*!< 0x00000400 */
#define EXTI_FPR1_FPIF10             EXTI_FPR1_FPIF10_Msk                      /*!< Falling Pending Interrupt Flag on line 10 */
#define EXTI_FPR1_FPIF11_Pos         (11U)
#define EXTI_FPR1_FPIF11_Msk         (0x1UL << EXTI_FPR1_FPIF11_Pos)           /*!< 0x00000800 */
#define EXTI_FPR1_FPIF11             EXTI_FPR1_FPIF11_Msk                      /*!< Falling Pending Interrupt Flag on line 11 */
#define EXTI_FPR1_FPIF12_Pos         (12U)
#define EXTI_FPR1_FPIF12_Msk         (0x1UL << EXTI_FPR1_FPIF12_Pos)           /*!< 0x00001000 */
#define EXTI_FPR1_FPIF12             EXTI_FPR1_FPIF12_Msk                      /*!< Falling Pending Interrupt Flag on line 12 */
#define EXTI_FPR1_FPIF13_Pos         (13U)
#define EXTI_FPR1_FPIF13_Msk         (0x1UL << EXTI_FPR1_FPIF13_Pos)           /*!< 0x00002000 */
#define EXTI_FPR1_FPIF13             EXTI_FPR1_FPIF13_Msk                      /*!< Falling Pending Interrupt Flag on line 13 */
#define EXTI_FPR1_FPIF14_Pos         (14U)
#define EXTI_FPR1_FPIF14_Msk         (0x1UL << EXTI_FPR1_FPIF14_Pos)           /*!< 0x00004000 */
#define EXTI_FPR1_FPIF14             EXTI_FPR1_FPIF14_Msk                      /*!< Falling Pending Interrupt Flag on line 14 */
#define EXTI_FPR1_FPIF15_Pos         (15U)
#define EXTI_FPR1_FPIF15_Msk         (0x1UL << EXTI_FPR1_FPIF15_Pos)           /*!< 0x00008000 */
#define EXTI_FPR1_FPIF15             EXTI_FPR1_FPIF15_Msk                      /*!< Falling Pending Interrupt Flag on line 15 */
#define EXTI_FPR1_FPIF16_Pos         (16U)
#define EXTI_FPR1_FPIF16_Msk         (0x1UL << EXTI_FPR1_FPIF16_Pos)           /*!< 0x00010000 */
#define EXTI_FPR1_FPIF16             EXTI_FPR1_FPIF16_Msk                      /*!< Falling Pending Interrupt Flag on line 16 */
#define EXTI_FPR1_FPIF17_Pos         (17U)
#define EXTI_FPR1_FPIF17_Msk         (0x1UL << EXTI_FPR1_FPIF17_Pos)           /*!< 0x00020000 */
#define EXTI_FPR1_FPIF17             EXTI_FPR1_FPIF17_Msk                      /*!< Falling Pending Interrupt Flag on line 17 */
#define EXTI_FPR1_FPIF18_Pos         (18U)
#define EXTI_FPR1_FPIF18_Msk         (0x1UL << EXTI_FPR1_FPIF18_Pos)           /*!< 0x00040000 */
#define EXTI_FPR1_FPIF18             EXTI_FPR1_FPIF18_Msk                      /*!< Falling Pending Interrupt Flag on line 18 */
#define EXTI_FPR1_FPIF20_Pos         (20U)
#define EXTI_FPR1_FPIF20_Msk         (0x1UL << EXTI_FPR1_FPIF20_Pos)           /*!< 0x00100000 */
#define EXTI_FPR1_FPIF20             EXTI_FPR1_FPIF20_Msk                      /*!< Falling Pending Interrupt Flag on line 20 */

/******************  Bit definition for EXTI_RTSR2 register  ******************/
#define EXTI_RTSR2_RT34_Pos           (2U)
#define EXTI_RTSR2_RT34_Msk           (0x1UL << EXTI_RTSR2_RT34_Pos)             /*!< 0x00000004 */
#define EXTI_RTSR2_RT34               EXTI_RTSR2_RT34_Msk                        /*!< Rising trigger configuration for input line 34 */

/******************  Bit definition for EXTI_FTSR2 register  ******************/
#define EXTI_FTSR2_FT34_Pos           (2U)
#define EXTI_FTSR2_FT34_Msk           (0x1UL << EXTI_FTSR2_FT34_Pos)             /*!< 0x00000004 */
#define EXTI_FTSR2_FT34               EXTI_FTSR2_FT34_Msk                        /*!< Falling trigger configuration for input line 34 */

/******************  Bit definition for EXTI_SWIER2 register  *****************/
#define EXTI_SWIER2_SWI34_Pos         (2U)
#define EXTI_SWIER2_SWI34_Msk         (0x1UL << EXTI_SWIER2_SWI34_Pos)           /*!< 0x00000004 */
#define EXTI_SWIER2_SWI34             EXTI_SWIER2_SWI34_Msk                      /*!< Software Interrupt on line 34 */

/*******************  Bit definition for EXTI_RPR2 register  ******************/
#define EXTI_RPR2_RPIF34_Pos         (2U)
#define EXTI_RPR2_RPIF34_Msk         (0x1UL << EXTI_RPR2_RPIF34_Pos)            /*!< 0x00000004 */
#define EXTI_RPR2_RPIF34             EXTI_RPR2_RPIF34_Msk                       /*!< Rising Pending Interrupt Flag on line 34 */

/*******************  Bit definition for EXTI_FPR2 register  ******************/
#define EXTI_FPR2_RPIF34_Pos         (2U)
#define EXTI_FPR2_RPIF34_Msk         (0x1UL << EXTI_FPR2_RPIF34_Pos)            /*!< 0x00000004 */
#define EXTI_FPR2_RPIF34             EXTI_FPR2_RPIF34_Msk                       /*!< Rising Pending Interrupt Flag on line 34 */

/*****************  Bit definition for EXTI_EXTICR1 register  **************/
#define EXTI_EXTICR1_EXTI0_Pos       (0U)
#define EXTI_EXTICR1_EXTI0_Msk       (0x7UL << EXTI_EXTICR1_EXTI0_Pos)         /*!< 0x00000007 */
#define EXTI_EXTICR1_EXTI0           EXTI_EXTICR1_EXTI0_Msk                    /*!< EXTI 0 configuration */
#define EXTI_EXTICR1_EXTI0_0         (0x1UL << EXTI_EXTICR1_EXTI0_Pos)         /*!< 0x00000001 */
#define EXTI_EXTICR1_EXTI0_1         (0x2UL << EXTI_EXTICR1_EXTI0_Pos)         /*!< 0x00000002 */
#define EXTI_EXTICR1_EXTI0_2         (0x4UL << EXTI_EXTICR1_EXTI0_Pos)         /*!< 0x00000004 */
#define EXTI_EXTICR1_EXTI1_Pos       (8U)
#define EXTI_EXTICR1_EXTI1_Msk       (0x7UL << EXTI_EXTICR1_EXTI1_Pos)         /*!< 0x00000700 */
#define EXTI_EXTICR1_EXTI1           EXTI_EXTICR1_EXTI1_Msk                    /*!< EXTI 1 configuration */
#define EXTI_EXTICR1_EXTI1_0         (0x1UL << EXTI_EXTICR1_EXTI1_Pos)         /*!< 0x00000100 */
#define EXTI_EXTICR1_EXTI1_1         (0x2UL << EXTI_EXTICR1_EXTI1_Pos)         /*!< 0x00000200 */
#define EXTI_EXTICR1_EXTI1_2         (0x4UL << EXTI_EXTICR1_EXTI1_Pos)         /*!< 0x00000400 */
#define EXTI_EXTICR1_EXTI2_Pos       (16U)
#define EXTI_EXTICR1_EXTI2_Msk       (0x7UL << EXTI_EXTICR1_EXTI2_Pos)         /*!< 0x00070000 */
#define EXTI_EXTICR1_EXTI2           EXTI_EXTICR1_EXTI2_Msk                    /*!< EXTI 2 configuration */
#define EXTI_EXTICR1_EXTI2_0         (0x1UL << EXTI_EXTICR1_EXTI2_Pos)         /*!< 0x00010000 */
#define EXTI_EXTICR1_EXTI2_1         (0x2UL << EXTI_EXTICR1_EXTI2_Pos)         /*!< 0x00020000 */
#define EXTI_EXTICR1_EXTI2_2         (0x4UL << EXTI_EXTICR1_EXTI2_Pos)         /*!< 0x00040000 */
#define EXTI_EXTICR1_EXTI3_Pos       (24U)
#define EXTI_EXTICR1_EXTI3_Msk       (0x7UL << EXTI_EXTICR1_EXTI3_Pos)         /*!< 0x07000000 */
#define EXTI_EXTICR1_EXTI3           EXTI_EXTICR1_EXTI3_Msk                    /*!< EXTI 3 configuration */
#define EXTI_EXTICR1_EXTI3_0         (0x1UL << EXTI_EXTICR1_EXTI3_Pos)         /*!< 0x01000000 */
#define EXTI_EXTICR1_EXTI3_1         (0x2UL << EXTI_EXTICR1_EXTI3_Pos)         /*!< 0x02000000 */
#define EXTI_EXTICR1_EXTI3_2         (0x4UL << EXTI_EXTICR1_EXTI3_Pos)         /*!< 0x04000000 */

/*****************  Bit definition for EXTI_EXTICR2 register  **************/
#define EXTI_EXTICR2_EXTI4_Pos       (0U)
#define EXTI_EXTICR2_EXTI4_Msk       (0x7UL << EXTI_EXTICR2_EXTI4_Pos)         /*!< 0x00000007 */
#define EXTI_EXTICR2_EXTI4           EXTI_EXTICR2_EXTI4_Msk                    /*!< EXTI 4 configuration */
#define EXTI_EXTICR2_EXTI4_0         (0x1UL << EXTI_EXTICR2_EXTI4_Pos)         /*!< 0x00000001 */
#define EXTI_EXTICR2_EXTI4_1         (0x2UL << EXTI_EXTICR2_EXTI4_Pos)         /*!< 0x00000002 */
#define EXTI_EXTICR2_EXTI4_2         (0x4UL << EXTI_EXTICR2_EXTI4_Pos)         /*!< 0x00000004 */
#define EXTI_EXTICR2_EXTI5_Pos       (8U)
#define EXTI_EXTICR2_EXTI5_Msk       (0x7UL << EXTI_EXTICR2_EXTI5_Pos)         /*!< 0x00000700 */
#define EXTI_EXTICR2_EXTI5           EXTI_EXTICR2_EXTI5_Msk                    /*!< EXTI 5 configuration */
#define EXTI_EXTICR2_EXTI5_0         (0x1UL << EXTI_EXTICR2_EXTI5_Pos)         /*!< 0x00000100 */
#define EXTI_EXTICR2_EXTI5_1         (0x2UL << EXTI_EXTICR2_EXTI5_Pos)         /*!< 0x00000200 */
#define EXTI_EXTICR2_EXTI5_2         (0x4UL << EXTI_EXTICR2_EXTI5_Pos)         /*!< 0x00000400 */
#define EXTI_EXTICR2_EXTI6_Pos       (16U)
#define EXTI_EXTICR2_EXTI6_Msk       (0x7UL << EXTI_EXTICR2_EXTI6_Pos)         /*!< 0x00070000 */
#define EXTI_EXTICR2_EXTI6           EXTI_EXTICR2_EXTI6_Msk                    /*!< EXTI 6 configuration */
#define EXTI_EXTICR2_EXTI6_0         (0x1UL << EXTI_EXTICR2_EXTI6_Pos)         /*!< 0x00010000 */
#define EXTI_EXTICR2_EXTI6_1         (0x2UL << EXTI_EXTICR2_EXTI6_Pos)         /*!< 0x00020000 */
#define EXTI_EXTICR2_EXTI6_2         (0x4UL << EXTI_EXTICR2_EXTI6_Pos)         /*!< 0x00040000 */
#define EXTI_EXTICR2_EXTI7_Pos       (24U)
#define EXTI_EXTICR2_EXTI7_Msk       (0x7UL << EXTI_EXTICR2_EXTI7_Pos)         /*!< 0x07000000 */
#define EXTI_EXTICR2_EXTI7           EXTI_EXTICR2_EXTI7_Msk                    /*!< EXTI 7 configuration */
#define EXTI_EXTICR2_EXTI7_0         (0x1UL << EXTI_EXTICR2_EXTI7_Pos)         /*!< 0x01000000 */
#define EXTI_EXTICR2_EXTI7_1         (0x2UL << EXTI_EXTICR2_EXTI7_Pos)         /*!< 0x02000000 */
#define EXTI_EXTICR2_EXTI7_2         (0x4UL << EXTI_EXTICR2_EXTI7_Pos)         /*!< 0x04000000 */

/*****************  Bit definition for EXTI_EXTICR3 register  **************/
#define EXTI_EXTICR3_EXTI8_Pos       (0U)
#define EXTI_EXTICR3_EXTI8_Msk       (0x7UL << EXTI_EXTICR3_EXTI8_Pos)         /*!< 0x00000007 */
#define EXTI_EXTICR3_EXTI8           EXTI_EXTICR3_EXTI8_Msk                    /*!< EXTI 8 configuration */
#define EXTI_EXTICR3_EXTI8_0         (0x1UL << EXTI_EXTICR3_EXTI8_Pos)         /*!< 0x00000001 */
#define EXTI_EXTICR3_EXTI8_1         (0x2UL << EXTI_EXTICR3_EXTI8_Pos)         /*!< 0x00000002 */
#define EXTI_EXTICR3_EXTI8_2         (0x4UL << EXTI_EXTICR3_EXTI8_Pos)         /*!< 0x00000004 */
#define EXTI_EXTICR3_EXTI9_Pos       (8U)
#define EXTI_EXTICR3_EXTI9_Msk       (0x7UL << EXTI_EXTICR3_EXTI9_Pos)         /*!< 0x00000700 */
#define EXTI_EXTICR3_EXTI9           EXTI_EXTICR3_EXTI9_Msk                    /*!< EXTI 9 configuration */
#define EXTI_EXTICR3_EXTI9_0         (0x1UL << EXTI_EXTICR3_EXTI9_Pos)         /*!< 0x00000100 */
#define EXTI_EXTICR3_EXTI9_1         (0x2UL << EXTI_EXTICR3_EXTI9_Pos)         /*!< 0x00000200 */
#define EXTI_EXTICR3_EXTI9_2         (0x4UL << EXTI_EXTICR3_EXTI9_Pos)         /*!< 0x00000400 */
#define EXTI_EXTICR3_EXTI10_Pos      (16U)
#define EXTI_EXTICR3_EXTI10_Msk      (0x7UL << EXTI_EXTICR3_EXTI10_Pos)        /*!< 0x00070000 */
#define EXTI_EXTICR3_EXTI10          EXTI_EXTICR3_EXTI10_Msk                   /*!< EXTI 10 configuration */
#define EXTI_EXTICR3_EXTI10_0        (0x1UL << EXTI_EXTICR3_EXTI10_Pos)        /*!< 0x00010000 */
#define EXTI_EXTICR3_EXTI10_1        (0x2UL << EXTI_EXTICR3_EXTI10_Pos)        /*!< 0x00020000 */
#define EXTI_EXTICR3_EXTI10_2        (0x4UL << EXTI_EXTICR3_EXTI10_Pos)        /*!< 0x00040000 */
#define EXTI_EXTICR3_EXTI11_Pos      (24U)
#define EXTI_EXTICR3_EXTI11_Msk      (0x7UL << EXTI_EXTICR3_EXTI11_Pos)        /*!< 0x07000000 */
#define EXTI_EXTICR3_EXTI11          EXTI_EXTICR3_EXTI11_Msk                   /*!< EXTI 11 configuration */
#define EXTI_EXTICR3_EXTI11_0        (0x1UL << EXTI_EXTICR3_EXTI11_Pos)        /*!< 0x01000000 */
#define EXTI_EXTICR3_EXTI11_1        (0x2UL << EXTI_EXTICR3_EXTI11_Pos)        /*!< 0x02000000 */
#define EXTI_EXTICR3_EXTI11_2        (0x4UL << EXTI_EXTICR3_EXTI11_Pos)        /*!< 0x04000000 */

/*****************  Bit definition for EXTI_EXTICR4 register  **************/
#define EXTI_EXTICR4_EXTI12_Pos      (0U)
#define EXTI_EXTICR4_EXTI12_Msk      (0x7UL << EXTI_EXTICR4_EXTI12_Pos)        /*!< 0x00000007 */
#define EXTI_EXTICR4_EXTI12          EXTI_EXTICR4_EXTI12_Msk                   /*!< EXTI 12 configuration */
#define EXTI_EXTICR4_EXTI12_0        (0x1UL << EXTI_EXTICR4_EXTI12_Pos)        /*!< 0x00000001 */
#define EXTI_EXTICR4_EXTI12_1        (0x2UL << EXTI_EXTICR4_EXTI12_Pos)        /*!< 0x00000002 */
#define EXTI_EXTICR4_EXTI12_2        (0x4UL << EXTI_EXTICR4_EXTI12_Pos)        /*!< 0x00000004 */
#define EXTI_EXTICR4_EXTI13_Pos      (8U)
#define EXTI_EXTICR4_EXTI13_Msk      (0x7UL << EXTI_EXTICR4_EXTI13_Pos)        /*!< 0x00000700 */
#define EXTI_EXTICR4_EXTI13          EXTI_EXTICR4_EXTI13_Msk                   /*!< EXTI 13 configuration */
#define EXTI_EXTICR4_EXTI13_0        (0x1UL << EXTI_EXTICR4_EXTI13_Pos)        /*!< 0x00000100 */
#define EXTI_EXTICR4_EXTI13_1        (0x2UL << EXTI_EXTICR4_EXTI13_Pos)       /*!< 0x00000200 */
#define EXTI_EXTICR4_EXTI13_2        (0x4UL << EXTI_EXTICR4_EXTI13_Pos)         /*!< 0x00000400 */
#define EXTI_EXTICR4_EXTI14_Pos      (16U)
#define EXTI_EXTICR4_EXTI14_Msk      (0x7UL << EXTI_EXTICR4_EXTI14_Pos)        /*!< 0x00070000 */
#define EXTI_EXTICR4_EXTI14          EXTI_EXTICR4_EXTI14_Msk                   /*!< EXTI 14 configuration */
#define EXTI_EXTICR4_EXTI14_0        (0x1UL << EXTI_EXTICR4_EXTI14_Pos)        /*!< 0x00010000 */
#define EXTI_EXTICR4_EXTI14_1        (0x2UL << EXTI_EXTICR4_EXTI14_Pos)        /*!< 0x00020000 */
#define EXTI_EXTICR4_EXTI14_2        (0x4UL << EXTI_EXTICR4_EXTI14_Pos)        /*!< 0x00040000 */
#define EXTI_EXTICR4_EXTI15_Pos      (24U)
#define EXTI_EXTICR4_EXTI15_Msk      (0x7UL << EXTI_EXTICR4_EXTI15_Pos)        /*!< 0x07000000 */
#define EXTI_EXTICR4_EXTI15          EXTI_EXTICR4_EXTI15_Msk                   /*!< EXTI 15 configuration */
#define EXTI_EXTICR4_EXTI15_0        (0x1UL << EXTI_EXTICR4_EXTI15_Pos)        /*!< 0x01000000 */
#define EXTI_EXTICR4_EXTI15_1        (0x2UL << EXTI_EXTICR4_EXTI15_Pos)        /*!< 0x02000000 */
#define EXTI_EXTICR4_EXTI15_2        (0x4UL << EXTI_EXTICR4_EXTI15_Pos)        /*!< 0x04000000 */

/*******************  Bit definition for EXTI_IMR1 register  ******************/
#define EXTI_IMR1_IM0_Pos            (0U)
#define EXTI_IMR1_IM0_Msk            (0x1UL << EXTI_IMR1_IM0_Pos)              /*!< 0x00000001 */
#define EXTI_IMR1_IM0                EXTI_IMR1_IM0_Msk                         /*!< Interrupt Mask on line 0 */
#define EXTI_IMR1_IM1_Pos            (1U)
#define EXTI_IMR1_IM1_Msk            (0x1UL << EXTI_IMR1_IM1_Pos)              /*!< 0x00000002 */
#define EXTI_IMR1_IM1                EXTI_IMR1_IM1_Msk                         /*!< Interrupt Mask on line 1 */
#define EXTI_IMR1_IM2_Pos            (2U)
#define EXTI_IMR1_IM2_Msk            (0x1UL << EXTI_IMR1_IM2_Pos)              /*!< 0x00000004 */
#define EXTI_IMR1_IM2                EXTI_IMR1_IM2_Msk                         /*!< Interrupt Mask on line 2 */
#define EXTI_IMR1_IM3_Pos            (3U)
#define EXTI_IMR1_IM3_Msk            (0x1UL << EXTI_IMR1_IM3_Pos)              /*!< 0x00000008 */
#define EXTI_IMR1_IM3                EXTI_IMR1_IM3_Msk                         /*!< Interrupt Mask on line 3 */
#define EXTI_IMR1_IM4_Pos            (4U)
#define EXTI_IMR1_IM4_Msk            (0x1UL << EXTI_IMR1_IM4_Pos)              /*!< 0x00000010 */
#define EXTI_IMR1_IM4                EXTI_IMR1_IM4_Msk                         /*!< Interrupt Mask on line 4 */
#define EXTI_IMR1_IM5_Pos            (5U)
#define EXTI_IMR1_IM5_Msk            (0x1UL << EXTI_IMR1_IM5_Pos)              /*!< 0x00000020 */
#define EXTI_IMR1_IM5                EXTI_IMR1_IM5_Msk                         /*!< Interrupt Mask on line 5 */
#define EXTI_IMR1_IM6_Pos            (6U)
#define EXTI_IMR1_IM6_Msk            (0x1UL << EXTI_IMR1_IM6_Pos)              /*!< 0x00000040 */
#define EXTI_IMR1_IM6                EXTI_IMR1_IM6_Msk                         /*!< Interrupt Mask on line 6 */
#define EXTI_IMR1_IM7_Pos            (7U)
#define EXTI_IMR1_IM7_Msk            (0x1UL << EXTI_IMR1_IM7_Pos)              /*!< 0x00000080 */
#define EXTI_IMR1_IM7                EXTI_IMR1_IM7_Msk                         /*!< Interrupt Mask on line 7 */
#define EXTI_IMR1_IM8_Pos            (8U)
#define EXTI_IMR1_IM8_Msk            (0x1UL << EXTI_IMR1_IM8_Pos)              /*!< 0x00000100 */
#define EXTI_IMR1_IM8                EXTI_IMR1_IM8_Msk                         /*!< Interrupt Mask on line 8 */
#define EXTI_IMR1_IM9_Pos            (9U)
#define EXTI_IMR1_IM9_Msk            (0x1UL << EXTI_IMR1_IM9_Pos)              /*!< 0x00000200 */
#define EXTI_IMR1_IM9                EXTI_IMR1_IM9_Msk                         /*!< Interrupt Mask on line 9 */
#define EXTI_IMR1_IM10_Pos           (10U)
#define EXTI_IMR1_IM10_Msk           (0x1UL << EXTI_IMR1_IM10_Pos)             /*!< 0x00000400 */
#define EXTI_IMR1_IM10               EXTI_IMR1_IM10_Msk                        /*!< Interrupt Mask on line 10 */
#define EXTI_IMR1_IM11_Pos           (11U)
#define EXTI_IMR1_IM11_Msk           (0x1UL << EXTI_IMR1_IM11_Pos)             /*!< 0x00000800 */
#define EXTI_IMR1_IM11               EXTI_IMR1_IM11_Msk                        /*!< Interrupt Mask on line 11 */
#define EXTI_IMR1_IM12_Pos           (12U)
#define EXTI_IMR1_IM12_Msk           (0x1UL << EXTI_IMR1_IM12_Pos)             /*!< 0x00001000 */
#define EXTI_IMR1_IM12               EXTI_IMR1_IM12_Msk                        /*!< Interrupt Mask on line 12 */
#define EXTI_IMR1_IM13_Pos           (13U)
#define EXTI_IMR1_IM13_Msk           (0x1UL << EXTI_IMR1_IM13_Pos)             /*!< 0x00002000 */
#define EXTI_IMR1_IM13               EXTI_IMR1_IM13_Msk                        /*!< Interrupt Mask on line 13 */
#define EXTI_IMR1_IM14_Pos           (14U)
#define EXTI_IMR1_IM14_Msk           (0x1UL << EXTI_IMR1_IM14_Pos)             /*!< 0x00004000 */
#define EXTI_IMR1_IM14               EXTI_IMR1_IM14_Msk                        /*!< Interrupt Mask on line 14 */
#define EXTI_IMR1_IM15_Pos           (15U)
#define EXTI_IMR1_IM15_Msk           (0x1UL << EXTI_IMR1_IM15_Pos)             /*!< 0x00008000 */
#define EXTI_IMR1_IM15               EXTI_IMR1_IM15_Msk                        /*!< Interrupt Mask on line 15 */
#define EXTI_IMR1_IM16_Pos           (16U)
#define EXTI_IMR1_IM16_Msk           (0x1UL << EXTI_IMR1_IM16_Pos)             /*!< 0x00010000 */
#define EXTI_IMR1_IM16               EXTI_IMR1_IM16_Msk                        /*!< Interrupt Mask on line 16 */
#define EXTI_IMR1_IM17_Pos           (17U)
#define EXTI_IMR1_IM17_Msk           (0x1UL << EXTI_IMR1_IM17_Pos)             /*!< 0x00020000 */
#define EXTI_IMR1_IM17               EXTI_IMR1_IM17_Msk                        /*!< Interrupt Mask on line 17 */
#define EXTI_IMR1_IM18_Pos           (18U)
#define EXTI_IMR1_IM18_Msk           (0x1UL << EXTI_IMR1_IM18_Pos)             /*!< 0x00040000 */
#define EXTI_IMR1_IM18               EXTI_IMR1_IM18_Msk                        /*!< Interrupt Mask on line 18 */
#define EXTI_IMR1_IM19_Pos           (19U)
#define EXTI_IMR1_IM19_Msk           (0x1UL << EXTI_IMR1_IM19_Pos)             /*!< 0x00080000 */
#define EXTI_IMR1_IM19               EXTI_IMR1_IM19_Msk                        /*!< Interrupt Mask on line 19 */
#define EXTI_IMR1_IM20_Pos           (20U)
#define EXTI_IMR1_IM20_Msk           (0x1UL << EXTI_IMR1_IM20_Pos)             /*!< 0x00100000 */
#define EXTI_IMR1_IM20               EXTI_IMR1_IM20_Msk                        /*!< Interrupt Mask on line 20 */
#define EXTI_IMR1_IM21_Pos           (21U)
#define EXTI_IMR1_IM21_Msk           (0x1UL << EXTI_IMR1_IM21_Pos)             /*!< 0x00200000 */
#define EXTI_IMR1_IM21               EXTI_IMR1_IM21_Msk                        /*!< Interrupt Mask on line 21 */
#define EXTI_IMR1_IM22_Pos           (22U)
#define EXTI_IMR1_IM22_Msk           (0x1UL << EXTI_IMR1_IM22_Pos)             /*!< 0x00400000 */
#define EXTI_IMR1_IM22               EXTI_IMR1_IM22_Msk                        /*!< Interrupt Mask on line 22 */
#define EXTI_IMR1_IM23_Pos           (23U)
#define EXTI_IMR1_IM23_Msk           (0x1UL << EXTI_IMR1_IM23_Pos)             /*!< 0x00800000 */
#define EXTI_IMR1_IM23               EXTI_IMR1_IM23_Msk                        /*!< Interrupt Mask on line 23 */
#define EXTI_IMR1_IM24_Pos           (24U)
#define EXTI_IMR1_IM24_Msk           (0x1UL << EXTI_IMR1_IM24_Pos)             /*!< 0x01000000 */
#define EXTI_IMR1_IM24               EXTI_IMR1_IM24_Msk                        /*!< Interrupt Mask on line 24 */
#define EXTI_IMR1_IM25_Pos           (25U)
#define EXTI_IMR1_IM25_Msk           (0x1UL << EXTI_IMR1_IM25_Pos)             /*!< 0x02000000 */
#define EXTI_IMR1_IM25               EXTI_IMR1_IM25_Msk                        /*!< Interrupt Mask on line 25 */
#define EXTI_IMR1_IM26_Pos           (26U)
#define EXTI_IMR1_IM26_Msk           (0x1UL << EXTI_IMR1_IM26_Pos)             /*!< 0x04000000 */
#define EXTI_IMR1_IM26               EXTI_IMR1_IM26_Msk                        /*!< Interrupt Mask on line 26 */
#define EXTI_IMR1_IM27_Pos           (27U)
#define EXTI_IMR1_IM27_Msk           (0x1UL << EXTI_IMR1_IM27_Pos)             /*!< 0x08000000 */
#define EXTI_IMR1_IM27               EXTI_IMR1_IM27_Msk                        /*!< Interrupt Mask on line 27 */
#define EXTI_IMR1_IM28_Pos           (28U)
#define EXTI_IMR1_IM28_Msk           (0x1UL << EXTI_IMR1_IM28_Pos)             /*!< 0x10000000 */
#define EXTI_IMR1_IM28               EXTI_IMR1_IM28_Msk                        /*!< Interrupt Mask on line 28 */
#define EXTI_IMR1_IM29_Pos           (29U)
#define EXTI_IMR1_IM29_Msk           (0x1UL << EXTI_IMR1_IM29_Pos)             /*!< 0x20000000 */
#define EXTI_IMR1_IM29               EXTI_IMR1_IM29_Msk                        /*!< Interrupt Mask on line 29 */
#define EXTI_IMR1_IM30_Pos           (30U)
#define EXTI_IMR1_IM30_Msk           (0x1UL << EXTI_IMR1_IM30_Pos)             /*!< 0x40000000 */
#define EXTI_IMR1_IM30               EXTI_IMR1_IM30_Msk                        /*!< Interrupt Mask on line 30 */
#define EXTI_IMR1_IM31_Pos           (31U)
#define EXTI_IMR1_IM31_Msk           (0x1UL << EXTI_IMR1_IM31_Pos)              /*!< 0x80000000 */
#define EXTI_IMR1_IM31               EXTI_IMR1_IM31_Msk                        /*!< Interrupt Mask on line 31 */
#define EXTI_IMR1_IM_Pos             (0U)
#define EXTI_IMR1_IM_Msk             (0xFFFFFFFFUL << EXTI_IMR1_IM_Pos)        /*!< 0xFFFFFFFF */
#define EXTI_IMR1_IM                 EXTI_IMR1_IM_Msk                          /*!< Interrupt Mask All */

/*******************  Bit definition for EXTI_IMR2 register  ******************/
#define EXTI_IMR2_IM32_Pos           (0U)
#define EXTI_IMR2_IM32_Msk           (0x1UL << EXTI_IMR2_IM32_Pos)             /*!< 0x00000001 */
#define EXTI_IMR2_IM32               EXTI_IMR2_IM32_Msk                        /*!< Interrupt Mask on line 32 */
#define EXTI_IMR2_IM33_Pos           (1U)
#define EXTI_IMR2_IM33_Msk           (0x1UL << EXTI_IMR2_IM33_Pos)             /*!< 0x00000002 */
#define EXTI_IMR2_IM33               EXTI_IMR2_IM33_Msk                        /*!< Interrupt Mask on line 33 */
#define EXTI_IMR2_IM34_Pos           (2U)
#define EXTI_IMR2_IM34_Msk           (0x1UL << EXTI_IMR2_IM34_Pos)             /*!< 0x00000004 */
#define EXTI_IMR2_IM34               EXTI_IMR2_IM34_Msk                        /*!< Interrupt Mask on line 34 */
#define EXTI_IMR2_IM35_Pos           (3U)
#define EXTI_IMR2_IM35_Msk           (0x1UL << EXTI_IMR2_IM35_Pos)             /*!< 0x00000008 */
#define EXTI_IMR2_IM35               EXTI_IMR2_IM35_Msk                        /*!< Interrupt Mask on line 35 */
#define EXTI_IMR2_IM36_Pos           (4U)
#define EXTI_IMR2_IM36_Msk           (0x1UL << EXTI_IMR2_IM36_Pos)             /*!< 0x00000010 */
#define EXTI_IMR2_IM36               EXTI_IMR2_IM36_Msk                        /*!< Interrupt Mask on line 36 */
#define EXTI_IMR2_IM_Pos             (0U)
#define EXTI_IMR2_IM_Msk             (0x1FUL << EXTI_IMR2_IM_Pos)               /*!< 0x0000001F */
#define EXTI_IMR2_IM                 EXTI_IMR2_IM_Msk                          /*!< Interrupt Mask All */

/*******************  Bit definition for EXTI_EMR1 register  ******************/
#define EXTI_EMR1_EM0_Pos            (0U)
#define EXTI_EMR1_EM0_Msk            (0x1UL << EXTI_EMR1_EM0_Pos)              /*!< 0x00000001 */
#define EXTI_EMR1_EM0                EXTI_EMR1_EM0_Msk                         /*!< Event Mask on line 0 */
#define EXTI_EMR1_EM1_Pos            (1U)
#define EXTI_EMR1_EM1_Msk            (0x1UL << EXTI_EMR1_EM1_Pos)              /*!< 0x00000002 */
#define EXTI_EMR1_EM1                EXTI_EMR1_EM1_Msk                         /*!< Event Mask on line 1 */
#define EXTI_EMR1_EM2_Pos            (2U)
#define EXTI_EMR1_EM2_Msk            (0x1UL << EXTI_EMR1_EM2_Pos)              /*!< 0x00000004 */
#define EXTI_EMR1_EM2                EXTI_EMR1_EM2_Msk                         /*!< Event Mask on line 2 */
#define EXTI_EMR1_EM3_Pos            (3U)
#define EXTI_EMR1_EM3_Msk            (0x1UL << EXTI_EMR1_EM3_Pos)              /*!< 0x00000008 */
#define EXTI_EMR1_EM3                EXTI_EMR1_EM3_Msk                         /*!< Event Mask on line 3 */
#define EXTI_EMR1_EM4_Pos            (4U)
#define EXTI_EMR1_EM4_Msk            (0x1UL << EXTI_EMR1_EM4_Pos)              /*!< 0x00000010 */
#define EXTI_EMR1_EM4                EXTI_EMR1_EM4_Msk                         /*!< Event Mask on line 4 */
#define EXTI_EMR1_EM5_Pos            (5U)
#define EXTI_EMR1_EM5_Msk            (0x1UL << EXTI_EMR1_EM5_Pos)              /*!< 0x00000020 */
#define EXTI_EMR1_EM5                EXTI_EMR1_EM5_Msk                         /*!< Event Mask on line 5 */
#define EXTI_EMR1_EM6_Pos            (6U)
#define EXTI_EMR1_EM6_Msk            (0x1UL << EXTI_EMR1_EM6_Pos)              /*!< 0x00000040 */
#define EXTI_EMR1_EM6                EXTI_EMR1_EM6_Msk                         /*!< Event Mask on line 6 */
#define EXTI_EMR1_EM7_Pos            (7U)
#define EXTI_EMR1_EM7_Msk            (0x1UL << EXTI_EMR1_EM7_Pos)              /*!< 0x00000080 */
#define EXTI_EMR1_EM7                EXTI_EMR1_EM7_Msk                         /*!< Event Mask on line 7 */
#define EXTI_EMR1_EM8_Pos            (8U)
#define EXTI_EMR1_EM8_Msk            (0x1UL << EXTI_EMR1_EM8_Pos)              /*!< 0x00000100 */
#define EXTI_EMR1_EM8                EXTI_EMR1_EM8_Msk                         /*!< Event Mask on line 8 */
#define EXTI_EMR1_EM9_Pos            (9U)
#define EXTI_EMR1_EM9_Msk            (0x1UL << EXTI_EMR1_EM9_Pos)              /*!< 0x00000200 */
#define EXTI_EMR1_EM9                EXTI_EMR1_EM9_Msk                         /*!< Event Mask on line 9 */
#define EXTI_EMR1_EM10_Pos           (10U)
#define EXTI_EMR1_EM10_Msk           (0x1UL << EXTI_EMR1_EM10_Pos)             /*!< 0x00000400 */
#define EXTI_EMR1_EM10               EXTI_EMR1_EM10_Msk                        /*!< Event Mask on line 10 */
#define EXTI_EMR1_EM11_Pos           (11U)
#define EXTI_EMR1_EM11_Msk           (0x1UL << EXTI_EMR1_EM11_Pos)             /*!< 0x00000800 */
#define EXTI_EMR1_EM11               EXTI_EMR1_EM11_Msk                        /*!< Event Mask on line 11 */
#define EXTI_EMR1_EM12_Pos           (12U)
#define EXTI_EMR1_EM12_Msk           (0x1UL << EXTI_EMR1_EM12_Pos)             /*!< 0x00001000 */
#define EXTI_EMR1_EM12               EXTI_EMR1_EM12_Msk                        /*!< Event Mask on line 12 */
#define EXTI_EMR1_EM13_Pos           (13U)
#define EXTI_EMR1_EM13_Msk           (0x1UL << EXTI_EMR1_EM13_Pos)             /*!< 0x00002000 */
#define EXTI_EMR1_EM13               EXTI_EMR1_EM13_Msk                        /*!< Event Mask on line 13 */
#define EXTI_EMR1_EM14_Pos           (14U)
#define EXTI_EMR1_EM14_Msk           (0x1UL << EXTI_EMR1_EM14_Pos)             /*!< 0x00004000 */
#define EXTI_EMR1_EM14               EXTI_EMR1_EM14_Msk                        /*!< Event Mask on line 14 */
#define EXTI_EMR1_EM15_Pos           (15U)
#define EXTI_EMR1_EM15_Msk           (0x1UL << EXTI_EMR1_EM15_Pos)             /*!< 0x00008000 */
#define EXTI_EMR1_EM15               EXTI_EMR1_EM15_Msk                        /*!< Event Mask on line 15 */
#define EXTI_EMR1_EM16_Pos           (16U)
#define EXTI_EMR1_EM16_Msk           (0x1UL << EXTI_EMR1_EM16_Pos)             /*!< 0x00010000 */
#define EXTI_EMR1_EM16               EXTI_EMR1_EM16_Msk                        /*!< Event Mask on line 16 */
#define EXTI_EMR1_EM17_Pos           (17U)
#define EXTI_EMR1_EM17_Msk           (0x1UL << EXTI_EMR1_EM17_Pos)             /*!< 0x00020000 */
#define EXTI_EMR1_EM17               EXTI_EMR1_EM17_Msk                        /*!< Event Mask on line 17 */
#define EXTI_EMR1_EM18_Pos           (18U)
#define EXTI_EMR1_EM18_Msk           (0x1UL << EXTI_EMR1_EM18_Pos)             /*!< 0x00040000 */
#define EXTI_EMR1_EM18               EXTI_EMR1_EM18_Msk                        /*!< Event Mask on line 18 */
#define EXTI_EMR1_EM19_Pos           (19U)
#define EXTI_EMR1_EM19_Msk           (0x1UL << EXTI_EMR1_EM19_Pos)             /*!< 0x00080000 */
#define EXTI_EMR1_EM19               EXTI_EMR1_EM19_Msk                        /*!< Event Mask on line 19 */
#define EXTI_EMR1_EM20_Pos           (20U)
#define EXTI_EMR1_EM20_Msk           (0x1UL << EXTI_EMR1_EM20_Pos)             /*!< 0x00100000 */
#define EXTI_EMR1_EM20               EXTI_EMR1_EM20_Msk                        /*!< Event Mask on line 20 */
#define EXTI_EMR1_EM21_Pos           (21U)
#define EXTI_EMR1_EM21_Msk           (0x1UL << EXTI_EMR1_EM21_Pos)             /*!< 0x00200000 */
#define EXTI_EMR1_EM21               EXTI_EMR1_EM21_Msk                        /*!< Event Mask on line 21 */
#define EXTI_EMR1_EM22_Pos           (22U)
#define EXTI_EMR1_EM22_Msk           (0x1UL << EXTI_EMR1_EM22_Pos)             /*!< 0x00400000 */
#define EXTI_EMR1_EM22               EXTI_EMR1_EM22_Msk                        /*!< Event Mask on line 22 */
#define EXTI_EMR1_EM23_Pos           (23U)
#define EXTI_EMR1_EM23_Msk           (0x1UL << EXTI_EMR1_EM23_Pos)             /*!< 0x00800000 */
#define EXTI_EMR1_EM23               EXTI_EMR1_EM23_Msk                        /*!< Event Mask on line 23 */
#define EXTI_EMR1_EM24_Pos           (24U)
#define EXTI_EMR1_EM24_Msk           (0x1UL << EXTI_EMR1_EM24_Pos)             /*!< 0x01000000 */
#define EXTI_EMR1_EM24               EXTI_EMR1_EM24_Msk                        /*!< Event Mask on line 24 */
#define EXTI_EMR1_EM25_Pos           (25U)
#define EXTI_EMR1_EM25_Msk           (0x1UL << EXTI_EMR1_EM25_Pos)             /*!< 0x02000000 */
#define EXTI_EMR1_EM25               EXTI_EMR1_EM25_Msk                        /*!< Event Mask on line 25 */
#define EXTI_EMR1_EM26_Pos           (26U)
#define EXTI_EMR1_EM26_Msk           (0x1UL << EXTI_EMR1_EM26_Pos)             /*!< 0x04000000 */
#define EXTI_EMR1_EM26               EXTI_EMR1_EM26_Msk                        /*!< Event Mask on line 26 */
#define EXTI_EMR1_EM27_Pos           (27U)
#define EXTI_EMR1_EM27_Msk           (0x1UL << EXTI_EMR1_EM27_Pos)             /*!< 0x08000000 */
#define EXTI_EMR1_EM27               EXTI_EMR1_EM27_Msk                        /*!< Event Mask on line 27 */
#define EXTI_EMR1_EM28_Pos           (28U)
#define EXTI_EMR1_EM28_Msk           (0x1UL << EXTI_EMR1_EM28_Pos)             /*!< 0x10000000 */
#define EXTI_EMR1_EM28               EXTI_EMR1_EM28_Msk                        /*!< Event Mask on line 28 */
#define EXTI_EMR1_EM29_Pos           (29U)
#define EXTI_EMR1_EM29_Msk           (0x1UL << EXTI_EMR1_EM29_Pos)             /*!< 0x20000000 */
#define EXTI_EMR1_EM29               EXTI_EMR1_EM29_Msk                        /*!< Event Mask on line 29 */
#define EXTI_EMR1_EM30_Pos           (30U)
#define EXTI_EMR1_EM30_Msk           (0x1UL << EXTI_EMR1_EM30_Pos)             /*!< 0x40000000 */
#define EXTI_EMR1_EM30               EXTI_EMR1_EM30_Msk                        /*!< Event Mask on line 30 */
#define EXTI_EMR1_EM31_Pos           (31U)
#define EXTI_EMR1_EM31_Msk           (0x1UL << EXTI_EMR1_EM31_Pos)             /*!< 0x80000000 */
#define EXTI_EMR1_EM31               EXTI_EMR1_EM31_Msk                        /*!< Event Mask on line 31 */

/*******************  Bit definition for EXTI_EMR2 register  ******************/
#define EXTI_EMR2_EM32_Pos           (0U)
#define EXTI_EMR2_EM32_Msk           (0x1UL << EXTI_EMR2_EM32_Pos)             /*!< 0x00000001 */
#define EXTI_EMR2_EM32               EXTI_EMR2_EM32_Msk                        /*!< Event Mask on line 32 */
#define EXTI_EMR2_EM33_Pos           (1U)
#define EXTI_EMR2_EM33_Msk           (0x1UL << EXTI_EMR2_EM33_Pos)             /*!< 0x00000002 */
#define EXTI_EMR2_EM33               EXTI_EMR2_EM33_Msk                        /*!< Event Mask on line 33 */
#define EXTI_EMR2_EM34_Pos           (2U)
#define EXTI_EMR2_EM34_Msk           (0x1UL << EXTI_EMR2_EM34_Pos)             /*!< 0x00000004 */
#define EXTI_EMR2_EM34               EXTI_EMR2_EM34_Msk                        /*!< Event Mask on line 34 */
#define EXTI_EMR2_EM35_Pos           (3U)
#define EXTI_EMR2_EM35_Msk           (0x1UL << EXTI_EMR2_EM35_Pos)             /*!< 0x00000008 */
#define EXTI_EMR2_EM35               EXTI_EMR2_EM35_Msk                        /*!< Event Mask on line 35 */
#define EXTI_EMR2_EM36_Pos           (4U)
#define EXTI_EMR2_EM36_Msk           (0x1UL << EXTI_EMR2_EM36_Pos)             /*!< 0x00000010 */
#define EXTI_EMR2_EM36               EXTI_EMR2_EM36_Msk                        /*!< Event Mask on line 36 */


#endif 