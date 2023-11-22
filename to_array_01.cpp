#include <array>
#include <typeinfo>
#include <type_traits>
#include <iostream>

// to_array added in C++20

int main()
{
    auto ar = std::to_array("necati");
    static_assert(ar.size() == 7);
    std::cout << typeid(ar).name() << '\n';
    constexpr auto b = std::is_same_v<std::array<char, 7u>, decltype(ar)>;
    std::cout << std::boolalpha << "b = " << b << '\n';
}
