#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::vector;

int main()
{
	int i;
	vector<int> v;
	while(cin >> i) {
		v.push_back(i);
	}
	return 0;
}
