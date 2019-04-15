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
	string s;
	vector<string> v;
	while(cin >> s) {
		v.push_back(s);
	}
	return 0;
}
