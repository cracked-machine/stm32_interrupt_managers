target_sources(${BUILD_NAME} PRIVATE
    # put source files here
    src/stm32g0_interrupt_manager.cpp

)

target_include_directories(${BUILD_NAME} PRIVATE 
    inc
)