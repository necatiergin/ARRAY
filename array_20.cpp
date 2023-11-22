#include <iostream>
#include <array>


int main()
{
	std::array<double, 4> ar{ 1.5, 6.7, 8.9, 2.3 };

	auto [a, b, c, d] = ar; //gecerli
	auto [x, y, z] = ar; //gecersiz
}
