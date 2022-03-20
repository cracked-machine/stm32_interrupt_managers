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

#ifndef __ISR_MANAGER_BASE_HPP__
#define __ISR_MANAGER_BASE_HPP__

#include <array>

#ifdef X86_UNIT_TESTING_ONLY
    // This file should contain CMSIS bit definitions
    #include <mock_cmsis.hpp>
#else
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wvolatile"
        #include <stm32g0xx.h>
	#pragma GCC diagnostic pop
#endif
namespace stm32::isr
{

template<typename BASE_ISR_ENUM>
class InterruptManagerStm32Base 
{
public:
    // pure virtual ISR function. To be implemented in a derived class, owned by the driver.
    virtual void ISR() = 0;

    // list of mapped interrupt handlers to BASE_ISR_ENUM
    static inline std::array<InterruptManagerStm32Base*, static_cast<std::size_t>(BASE_ISR_ENUM::capacity)> m_interrupt_handlers;

    // function to map interrupt handlers to BASE_ISR_ENUM
    void register_handler(BASE_ISR_ENUM interrupt_type, InterruptManagerStm32Base *handler)
    {
        if (m_interrupt_handlers[ static_cast<int>(interrupt_type) ] == nullptr)
        {
            m_interrupt_handlers[ static_cast<int>(interrupt_type) ] = handler;
        }
        else
        {
            while(true) { /* error this slot has been allocated */ }        
        }
    }
};


} // namespace stm32::isr

#endif // __ISR_MANAGER_BASE_HPP__