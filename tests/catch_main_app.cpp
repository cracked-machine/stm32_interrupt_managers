#include <catch2/catch_all.hpp>
#include <isr_manager_stm32g0.hpp>

using namespace stm32::isr;

// mock ISR enum just for explicit instance below
enum class dummy_base_isr_enum { isr_type1, isr_type2, capacity };

// enforce code coverage with explicit instances of func templates so that linker does not drop references
template void InterruptManagerStm32Base<dummy_base_isr_enum>::register_handler(
    dummy_base_isr_enum interrupt_type, 
    InterruptManagerStm32Base *handler);

TEST_CASE("Test stm32_interrupt_managers", "[stm32_interrupt_managers]")
{
    REQUIRE(true);
}