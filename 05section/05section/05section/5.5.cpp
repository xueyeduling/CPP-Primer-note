#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int grade;
	cin >> grade;
	const vector<string> scores = { "F","D","C","B","A","A++" };
	string lettergrade;
	if (grade < 60)
	{
		lettergrade = scores[0];
	}
	else
	{
		lettergrade = scores[(grade - 50) / 10];
		if (grade % 10 < 3)
			lettergrade += '-';
		else if (grade % 10 > 7)
			lettergrade += '+';
	}
	cout << lettergrade << endl;
	system("pause");
	return 0;
}