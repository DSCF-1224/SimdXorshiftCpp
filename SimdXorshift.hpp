/// @file SimdXorshift.hpp
/// @brief C++ implementation of Xorshift using SIMD (emmintrin & immintrin)

#include <random>

namespace simd_xorshift
{
    /// @brief Checks if the given type is `std::uniform_random_bit_generator`
    /// @tparam G A type that should satisfy the `std::uniform_random_bit_generator` concept
    /// @return `true` if `G` is `std::uniform_random_bit_generator`.
    /// @note C++20 must be required for this function to work
    /// @note https://cpprefjp.github.io/reference/random/uniform_random_bit_generator.html
    template<std::uniform_random_bit_generator G>
    static constexpr bool IsUniformRandomBitGenerator(void)
    {
        return true;
    }


    /// @brief Checks if the given type is `std::uniform_random_bit_generator`
    /// @tparam G A type that should satisfy the `std::uniform_random_bit_generator` concept
    /// @return `false` if `G` is NOT `std::uniform_random_bit_generator`.
    /// @note C++20 must be required for this function to work
    /// @note https://cpprefjp.github.io/reference/random/uniform_random_bit_generator.html
    template<typename G>
    static constexpr bool IsUniformRandomBitGenerator(void)
    {
        return false;
    }
}
