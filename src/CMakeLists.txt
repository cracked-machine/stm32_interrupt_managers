# include this using `add_subdirectory(stm32_interrupt_managers/rawptrs)`
target_sources(${BUILD_NAME} PRIVATE
    # put source files here
    isr_manager_stm32g0.cpp

)

target_include_directories(${BUILD_NAME} PRIVATE 
    ../include
)