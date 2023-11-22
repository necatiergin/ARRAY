#include <array>

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	std::array ar{ std::begin(a), std::end(a) };
}
