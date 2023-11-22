#include <array>
#include <iostream>

int main()
{
	std::array<int, 4> ar{};

	for (auto x : ar)
		std::cout << x << ' ';  //zero
}
