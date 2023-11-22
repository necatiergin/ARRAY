#include <array>
#include <iostream>


int main()
{
	using namespace std;

	array<int, 0> a1;
	array<int, 3> a2;

	cout << boolalpha;
	cout << "is a1 empty?  " << a1.empty() << "\n";
	cout << "is a2 empty?  " << a1.empty() << "\n";
	cout << "a1.size()     " << a1.size() << "\n";
	cout << "a2.size()     " << a2.size() << "\n";
	cout << "a1.max_size() " << a1.max_size() << "\n";
	cout << "a2.max_size() " << a2.max_size() << "\n";
}
