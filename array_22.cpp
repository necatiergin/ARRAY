#include <array>
#include <type_traits>

int main()
{
    auto ar = std::to_array({10, 20, 30, 40, 50 });
    static_assert(std::is_same_v<decltype(ar), std::array<int, 5u>>);
}
