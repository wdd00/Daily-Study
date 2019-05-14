#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	int flag = 0;
	char c;

	cin >> s1;
	do {
		cin >> s2;
		if (s1 == s2)
		{
			flag = 1;
			break;
		}
		s1 = s2;
		cin.get(c);
	} while (c != '\n');

	if(flag)
		cout << "the repeated word is " << s1 << endl;
	else
		cout << "no word is repeated" << endl;

	return 0;	
}
