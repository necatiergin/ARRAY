#include <array>
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	array<string, 5> ax{ "ali", "veli", "hakan", "nejla", "tufan" };
	array<string, 5> az{ move(ax) };

	cout << "az yazdiriliyor\n";
	for (const auto& s : az)
		cout << "(" << s << ") ";
	cout << "\n\n";

	cout << "ax yazdiriliyor\n";
	for (const auto& s : ax)
		cout << "(" << s << ") ";
	cout << "\n\n";
}
