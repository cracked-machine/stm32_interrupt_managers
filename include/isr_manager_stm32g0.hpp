// MIT License

// Copyright (c) 2022 Chris Sutton

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// @brief For example on how to use this class, see https://godbolt.org/z/rx53GcrsE

#ifndef __ISR_MANAGER_STM32G0_HPP__
#define __ISR_MANAGER_STM32G0_HPP__

#include <array>
#include <isr_manager_stm32_base.hpp>

namespace stm32::isr
{


// List of interrupt types specific to STM32G0 devices. Used to specialise InterruptManagerStm32Base<BASE_ISR_ENUM>
enum class InterruptTypeStm32g0
{
    exti5,
    exti10,
    dma1_ch2,
    tim2,
    tim3,
    tim4,
    tim7,
    tim14,
    tim15,
    tim16,
    usart5,
    capacity,   // special type to get the max size. Do not select as an interrupt vector!
};

// @brief This is specialization of InterruptManagerStm32Base for STM32G0 devices
class InterruptManagerStm32g0 : public InterruptManagerStm32Base<InterruptTypeStm32g0>
{
public:
    InterruptManagerStm32g0() = default;
};

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::exti5
extern "C" void EXTI4_15_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::dma1_ch2
extern "C" void DMA1_Channel1_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::tim16
extern "C" void TIM16_FDCAN_IT0_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::tim15
extern "C" void TIM15_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::usart3, 
// InterruptTypeStm32g0::usart4, InterruptTypeStm32g0::usart5, InterruptTypeStm32g0::usart6 and lpuart
extern "C" void USART3_4_5_6_LPUART1_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::tim7 and InterruptTypeStm32g0::lptim2
extern "C" void TIM7_LPTIM2_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::tim3 and InterruptTypeStm32g0::tim4
extern "C" void TIM3_TIM4_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::tim14
extern "C" void TIM14_IRQHandler(void);

// STM32G0-specific ISR. Calls registered handler for InterruptTypeStm32g0::tim2
extern "C" void TIM2_IRQHandler(void);

} // namespace stm32::isr

/// @brief convenience alias for ISR type enummeration
using STM32G0_ISR = stm32::isr::InterruptTypeStm32g0;

#endif  // __ISR_MANAGER_STM32G0_HPP__