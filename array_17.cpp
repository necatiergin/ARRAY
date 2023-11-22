#include <array>
#include <string>
#include <algorithm>
#include "nutility.h"


int main()
{
	using namespace std;

	array<string, 100> ars;

	for (size_t i = 0; i < ars.size(); ++i)
		ars[i] = rname();

	sort(ars.begin(), ars.end());
	copy_if(ars.begin(), ars.end(), ostream_iterator<string>{cout, " "}, [](const string& s) {
		return s.size() == 4;	});
}
