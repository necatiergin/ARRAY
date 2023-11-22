#include <array>
#include <type_traits>

int main()
{
    auto ar = std::to_array<unsigned long>({ 10, 20, 30, 40});
    static_assert(std::is_same_v<decltype(ar), std::array<unsigned long, 4u>>);
}
