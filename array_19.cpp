#include <array>
#include <iostream>

std::array<int, 3> foo()
{
	return { 1, 4, 6 };
}

int main()
{
	using namespace std;

	array<int, 3> a1 = foo();
	auto a2 = foo();
	auto [a, b, c] = foo();  //structured binding

	cout << a << " " << b << " " << c << "\n";
}
