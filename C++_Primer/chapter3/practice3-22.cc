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
	string s;
	vector<string> v;
	while(getline(cin, s)){
		v.push_back(s);
	}
	
	for(auto it = v.begin(); it != v.end() && !it->empty(); ++it){
		for (auto it2 = it->begin(); it2 != it->end(); ++it2)
			*it2 = toupper(*it2);
		cout << *it << endl;
	}
	return 0;
}
