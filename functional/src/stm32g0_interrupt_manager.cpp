// MIT License

// Copyright (c) 2021 Chris Sutton

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


#include <stm32g0_interrupt_manager.hpp>

namespace stm32::isr
{

void STM32G0InterruptManager::register_callback(const InterruptType &interrupt_type, const std::function<void()> callable)
{
    if (m_interrupt_callbacks[ static_cast<int>(interrupt_type) ] == nullptr)
    {
        m_interrupt_callbacks[ static_cast<int>(interrupt_type) ] = callable;
    }
    else
    {
        while(true) 
        {
            // error this slot has been allocated
        }
        
    }
}

extern "C" void EXTI4_15_IRQHandler(void)
{
    // call std::function at this ISR index
    if (STM32G0InterruptManager::m_interrupt_callbacks[ static_cast<int>( STM32G0InterruptManager::InterruptType::exti5 ) ] != nullptr)
    {
        STM32G0InterruptManager::m_interrupt_callbacks[ static_cast<int>( STM32G0InterruptManager::InterruptType::exti5 ) ]();
    }
    else
    {
        while(true)
        {
            // No function found at STM32G0InterruptManager::exti5
        }
    }
}

extern "C" void DMA1_Channel1_IRQHandler(void)
{
    // call std::function at this ISR index
    if (STM32G0InterruptManager::m_interrupt_callbacks[ static_cast<int>( STM32G0InterruptManager::InterruptType::dma1_ch2 ) ] != nullptr)
    {
        STM32G0InterruptManager::m_interrupt_callbacks[ static_cast<int>( STM32G0InterruptManager::InterruptType::dma1_ch2 ) ]();
    }
    else
    {
        while(true)
        {
            // No function found at STM32G0InterruptManager::dma1_ch2
        }
        
    }
}

} // namespace stm32::isr

