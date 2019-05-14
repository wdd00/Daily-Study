#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> a, b;
	int i;
	bool flag = true;

	while (cin >> i)
	{
		a.push_back(i);
		if(getchar() == '\n')
			break;	
	}

	while (cin >> i)
	{
		b.push_back(i);
                if(getchar() == '\n')
                        break;
        }

	for(auto it1 = a.begin(), it2 = b.begin(); it1 != a.end() && it2 != b.end(); ++it1, ++it2)
	{
		if(*it1 != *it2)
		{
			flag = false;
			break;
		}
	}
	
	cout << "The result is " << flag << endl;

	return 0;
}
