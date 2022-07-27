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

#include <isr_manager_stm32g0.hpp>

namespace stm32::isr
{

extern "C" void EXTI4_15_IRQHandler(void)
{
  // This calls all registered (non-null) ISR functions. Add more as needed. Must add the following:
  // 1. check if EXTI flag is set before calling ISR function (using LL_EXTI_IsActiveFallingFlag_0_31)
  // 2. check ISR slot has a callback function set (not nullptr)
  // 3. reset the interrupt flag for their EXTI (using LL_EXTI_ClearFallingFlag_0_31)
  if ((EXTI->FPR1 & EXTI_IMR1_IM5) == EXTI_IMR1_IM5)
  {
    if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::exti5)] != nullptr)
    {
      InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::exti5)]->ISR();
      // clear the falling flag for EXTI Line 5
      EXTI->FPR1 = EXTI->FPR1 | EXTI_IMR1_IM5;
    }
    else
    {
      while (true)
      { /* No ISR registered in InterruptManagerStm32g0 */
      }
    }
  }
  else if ((EXTI->FPR1 & EXTI_IMR1_IM10) == EXTI_IMR1_IM10)
  {
    if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::exti10)] != nullptr)
    {
      InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::exti10)]->ISR();
      // clear the falling flag for EXTI Line 10
      EXTI->FPR1 = EXTI->FPR1 | EXTI_IMR1_IM10;
    }
    else
    {
      while (true)
      { /* No ISR registered in InterruptManagerStm32g0 */
      }
    }
  }
  else if ((EXTI->FPR1 & EXTI_IMR1_IM15) == EXTI_IMR1_IM15)
  {
    if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::exti15)] != nullptr)
    {
      InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::exti15)]->ISR();
      // clear the falling flag for EXTI Line 15
      EXTI->FPR1 = EXTI->FPR1 | EXTI_IMR1_IM15;
    }
    else
    {
      while (true)
      { /* No ISR registered in InterruptManagerStm32g0 */
      }
    }
  }
}

extern "C" void DMA1_Channel1_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::dma1_ch2)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::dma1_ch2)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void TIM2_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim2)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim2)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void TIM3_TIM4_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim3)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim3)]->ISR();
  }
  else if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim4)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim4)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void TIM14_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim14)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim14)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void TIM15_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim15)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim15)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void TIM16_FDCAN_IT0_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim16)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim16)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void TIM7_LPTIM2_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim7)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::tim7)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

extern "C" void USART3_4_5_6_LPUART1_IRQHandler(void)
{
  if (InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::usart5)] != nullptr)
  {
    InterruptManagerStm32g0::m_interrupt_handlers[static_cast<int>(InterruptTypeStm32g0::usart5)]->ISR();
  }
  else
  {
    while (true)
    { /* No ISR registered in InterruptManagerStm32g0 */
    }
  }
}

} // namespace stm32::isr
