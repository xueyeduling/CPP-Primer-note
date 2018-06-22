#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // 定义main函数返回类型EXIT_FAILURE和EXIT_SUCCESS
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
typedef string::size_type sz;
// a非法，init的第一个形参并没有默认实参
// c的调用与初衷不符，因为14初始化的是第一个形参，'*'初始化的是第二个形参
char *init(int ht, int wd = 80, char bckgrnd = ' ');
int main()
{
	//init();
	init(24, 10);
	init(41, '*');
	system("pause");
	return 0;
}
char *init(int ht, int wd, char bckgrnd)
{
	cout << ht << endl
		<< wd << endl
		<< bckgrnd << endl;
	char ch = 'a';
	return &ch;
}