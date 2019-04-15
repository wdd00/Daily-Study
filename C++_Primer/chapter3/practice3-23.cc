#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v;
	int i;
	while(cin >> i){
		v.push_back(i);
	}
	
	for(auto it = v.begin(); it != v.end(); ++it) {
		*it = (*it) * 2;
		cout << *it << endl;
	}
	return 0;
}
