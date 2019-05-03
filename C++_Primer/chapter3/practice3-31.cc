#include <iostream>
#include <cstddef>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;

	for (auto i : a)
		cout << i << endl;

	return 0;
}
