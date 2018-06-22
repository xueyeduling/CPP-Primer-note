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
	string maxString;
	int max = 0;
	string nowString;
	string prevString;
	int tmp = 1;
	while (cin >> nowString)
	{
		if (nowString == prevString) {
			tmp++;
			if (tmp > max) {
				max = tmp;
				maxString = prevString;
			}
		}
		else {
			prevString = nowString;
			tmp = 1;
		}
	}
	if (max > 1)
		cout << maxString << " 连续出现了:" << max << "次" << endl;
	else
		cout << "没有连续出现的单词" << endl;
	system("pause");
	return 0;
}