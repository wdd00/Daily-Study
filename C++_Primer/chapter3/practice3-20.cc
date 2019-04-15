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
	
/*	for(int j = 0; j <v.size()-1; j += 2){
		cout << v[j] + v[j+1] << endl;
	}*/
	unsigned int l = v.size();
	for(int j = 0; j <= l/2-1; j++){
		cout << v[j] + v[l-j-1] << endl;
	}
	return 0;
}
