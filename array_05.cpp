#include <array>
#include <iostream>

std::array<int, 3> foo(int x, int y, int z)
{
	//
	return {x, y, z};
}

int main()
{
	auto ar = foo(10, 20, 30);

	for (auto x : ar)
		std::cout << x << " ";
}
