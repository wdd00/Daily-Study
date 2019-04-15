#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("Hello World!!!");
	//punct_cnt的类型和s.size的返回类型一致
	decltype(s.size()) punct_cnt = 0;
	//统计s中标点符号的数量
	for(auto c : s)
		if(ispunct(c))
			++punct_cnt;
	cout << punct_cnt << " punctuation characters in " << endl;
	return 0;
}
