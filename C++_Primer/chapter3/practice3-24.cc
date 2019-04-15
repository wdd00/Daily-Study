#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int i;
	vector<int> v;
	while(cin >> i)
		v.push_back(i);
	
/*	for(auto j = v.cbegin(); j != v.cend() && j+1 != v.cend(); j += 2){
		cout << *j + *(j+1) << endl;
	}
*/	
	for(auto j = v.cbegin(); j < v.cbegin() + (v.cend() - v.cbegin())/2 ; j++){
		cout << *j + *(v.cend() - 1  - (j - v.cbegin())) << endl;
	}
	return 0;
}
