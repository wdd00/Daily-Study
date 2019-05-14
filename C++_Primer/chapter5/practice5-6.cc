#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	string lettergrade;
	unsigned int grade;

	cin >> grade;

	grade < 60? lettergrade = scores[0] : (grade == 100? lettergrade = scores[5] : (grade % 10 > 7? lettergrade = scores[(grade - 50)/10] + '+' : (grade % 10 < 3? lettergrade = scores[(grade - 50)/10] + '-' : lettergrade = scores[(grade - 50)/10])));

	cout << lettergrade << endl;

	return 0;
}
