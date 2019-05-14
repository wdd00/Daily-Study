#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str, max_str, last_str;
	int scnt = 0, max_cnt = 0;	
	
	while(cin >> str)
	{
		if(last_str.empty())
		{
			last_str = str;
			max_str = str;
			max_cnt = 1;
			scnt = 1;
		}
		else
		{
			if (str == last_str)
				++scnt;
			else 
			{
				if(scnt > max_cnt)
				{
					max_str = last_str;
					max_cnt = scnt;
				}
				scnt = 1;
			}
		}
		last_str = str;
	}
	
	cout << max_str << " appears " << max_cnt << " times" << endl;

	return 0;
}
