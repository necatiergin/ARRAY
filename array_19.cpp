#include <array>
#include <iostream>

std::array<int, 3> foo()
{
	return { 1, 4, 6 };
}

int main()
{
	std::array<int, 3> a1 = foo();
	auto a2 = foo();
	auto [a, b, c] = foo();  //structured binding

	std::cout << a << ' ' << b << ' ' << c << '\n';
}
