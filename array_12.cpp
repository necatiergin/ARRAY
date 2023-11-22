#include <array>
#include <iostream>

int main()
{
	using namespace std;

	array<int, 10> ax;

	ax.fill(5);

	for (int& x : ax)
		++x;

	for (int x : ax)
		cout << x << " ";
}
