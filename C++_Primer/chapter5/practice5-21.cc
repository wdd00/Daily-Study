#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	string s1,s2;
	char c;
	int flag = 0;
	cin >> s1;
	do {
		cin >> s2;
		if (s1 == s2 && isupper(s1[0]))
		{
			flag = 1;
			break;
		}
		s1 = s2;
		cin.get(c);
	} while(c != '\n');

	if(flag)
		cout << "the repeated word is " << s1 << endl;
	else
		cout << "no repeat word" << endl;
}
