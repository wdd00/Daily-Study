#include <iostream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int a, b;
	while (cin >> a >> b) {
		try {
			if (b == 0)
				throw std::runtime_error("divisor is 0");
			cout << a/b << endl;
		} catch (std::runtime_error err) {
			cout << err.what()
			     << "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}

	return 0;
}
