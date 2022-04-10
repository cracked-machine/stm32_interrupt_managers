
## Running Units Tests on X86

Open this project in VSCode to run the unit tests. The build output is linked with the Catch2 library, so to run the unit tests you only need to run the build:
`./build/test_suite`

See `.vscode/tasks.json` for details on the individual toolchain commands.

## CMSIS Mocking

This project downloads the [embedded_utils](https://github.com/cracked-machine/embedded_utils/tree/main/tests) repo which contains a minimal STM32 mocking library.

Building this library project directly will define `STM32G0B1xx.h` which means `include/isr_manager_stm32_base.hpp` will include the mocked version of `stm32g0xx.h` header. The library will use the STM32 version of `STM32G0B1xx.h` when built as a submodule.




