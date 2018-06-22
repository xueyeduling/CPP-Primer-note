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
	int i;
	double d;
	//a.均为3
	d = i = 3.5;
	cout << i << ' ' << d << endl;
	//b. d为3.5，i为3
	i = d = 3.5;
	cout << i << ' ' << d << endl;
	system("pause");
	return 0;
}