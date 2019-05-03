#include <iostream>
#include <cstddef>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
/*	int a[10], b[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	
	for (int i = 0; i < 10; i++)
		b[i] = a[i];

	for (auto i : b)
		cout << i << endl;
*/
	vector<int> v, v1;
	for(int i = 0; i < 10; i++)
		v.push_back(i);
	
	v1 = v;

	for(auto i : v1)
		cout << i << endl;
	return 0;
}
