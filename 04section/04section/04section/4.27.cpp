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
	unsigned long ul1 = 3, ul2 = 7;
	// a. 3
	cout << (ul1&ul2) << endl;
	// b. 7
	cout << (ul1|ul2) << endl;
	// c. 1
	cout << (ul1&&ul2) << endl;
	// d. 1
	cout << (ul1||ul2) << endl;
	system("pause");
	return 0;
}