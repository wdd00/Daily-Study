#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string rsp;

	do {
		cout << "please enter two strings:" << endl;
		string s1, s2;
		cin >> s1 >> s2;
		string str = (s1.size() > s2.size()) ? s2 : s1;
		cout << "the shorter one is " << str << endl; 
		cout << "More? Enter yes or no: ";
		cin >> rsp;
	} while(!rsp.empty() && rsp[0] != 'n');

	return 0;
}
