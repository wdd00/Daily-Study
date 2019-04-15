#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> v;
	string s;
	while(cin >> s){
		v.push_back(s);
	}
	
	for(auto &i : v) {
		for(auto &j : i)
			j = toupper(j);
		cout << i <<endl;
	}
	
	return 0;	
}
