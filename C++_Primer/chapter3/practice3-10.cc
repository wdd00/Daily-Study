#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::string;

int main()
{
	string s, temp;
	getline(cin, s);
	for(auto c : s)
		if(!ispunct(c))
			temp += c;
	cout << temp << std::endl;
	return 0;
}
