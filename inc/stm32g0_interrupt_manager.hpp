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

#ifndef __STM32G0_INTERRUPT_MANAGERS_HPP__
#define __STM32G0_INTERRUPT_MANAGERS_HPP__

#include <array>
#include <functional>

namespace stm32::isr
{

class STM32G0InterruptManager
{
public:
    STM32G0InterruptManager() = default;

    // list of interrupt types
    enum class InterruptType
    {
        exti5,
        dma1_ch2,
        capacity,
    };
    
    // list of mapped InterruptTypes to std::function callables
    static inline std::array<
        std::function<void()>,
        static_cast<std::size_t>(InterruptType::capacity)
    > m_interrupt_callbacks;
    
    // template function to map InterruptType to std::function callables
    template <typename INTERRUPT_TYPE>
    static void register_callback(INTERRUPT_TYPE interrupt_type, std::function<void()> &callable);

};

// specialised template function for "enum class InterruptType"
template <> inline
void STM32G0InterruptManager::register_callback(InterruptType interrupt_type, std::function<void()> &callable)
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

extern "C" void EXTI4_15_IRQHandler(void);
extern "C" void DMA1_Channel1_IRQHandler(void);

} // namespace stm32::isr



#endif  // __STM32G0_INTERRUPT_MANAGERS_HPP__