[![CMake](https://github.com/cracked-machine/stm32_interrupt_managers/actions/workflows/cmake.yml/badge.svg)](https://github.com/cracked-machine/stm32_interrupt_managers/actions/workflows/cmake.yml)
[![Codecov](https://img.shields.io/codecov/c/github/cracked-machine/stm32_interrupt_managers)](https://app.codecov.io/gh/cracked-machine/stm32_interrupt_managers)

## C++ Interrupt Managers for STM32 platform

See the [wiki](https://github.com/cracked-machine/stm32_interrupt_managers/wiki) for documentation / reference

See [readme](tests) for information on unit testing/mocking.

### Adding this library to your STM32 Project

Include this repo into your project as a submodule and add the following line to your top-level CMakeFiles.txt:

`add_subdirectory(stm32_interrupt_managers)`

This assumes your project's top-level CMakeFiles.txt is already configured for STM32 platform.


