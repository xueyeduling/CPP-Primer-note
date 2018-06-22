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
	signed short i = 1;
	i += 11111111111111111;
	cout << i << endl;
	i *= 11111111111111111111;
	cout << i << endl;
	i = -i * 11111111111111111111;
	cout << i << endl;
	system("pause");
	return 0;
}