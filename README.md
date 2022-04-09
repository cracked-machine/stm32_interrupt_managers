[![CMake](https://github.com/cracked-machine/stm32_interrupt_managers/actions/workflows/cmake.yml/badge.svg)](https://github.com/cracked-machine/stm32_interrupt_managers/actions/workflows/cmake.yml)
[![Codecov](https://img.shields.io/codecov/c/github/cracked-machine/stm32_interrupt_managers)](https://app.codecov.io/gh/cracked-machine/stm32_interrupt_managers)

## C++ Interrupt Managers for STM32 platform

See the [wiki](https://github.com/cracked-machine/stm32_interrupt_managers/wiki) for documentation / reference

See [readme](tests) for information on unit testing/mocking.

#### Adding this library to your STM32 Project

There are two ways to add this library to your project's CMakeLists.txt:

1. Implicitly include the [external.cmake](cmake/external.cmake):

```
set(BUILD_NAME "MyProject")
add_executable(${BUILD_NAME} "")
include(cmake/external.cmake)
```

2. Explicitly add [embedded_utils](https://github.com/cracked-machine/embedded_utils.git) to your project as a submodule and add the subdirectory:

```
add_subdirectory(extern/embedded_utils)
```


