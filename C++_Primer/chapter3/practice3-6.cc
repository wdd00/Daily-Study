#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("Hello World!123");
	for(char &c : s)
		if(c != ' ')
			c = 'X';
	cout << s << endl;
	return 0;
}
