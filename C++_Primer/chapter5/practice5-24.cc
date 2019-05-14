#include <iostream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int a, b;
	cin >> a >> b;
	if(b == 0)
		throw std::runtime_error("divisor is 0");
	cout << a/b << endl;

	return 0;
}
