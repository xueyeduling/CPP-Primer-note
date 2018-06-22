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

// 返回局部变量和非引用类型形参的引用无效
// 当返回结果作为左值的时候，返回常量的引用无效
int &func(int &val)
{
	return val;
}
const int &func2(const int &val)
{
	return val;
}
int main()
{
	int val = 20;
	cout << func(val) << endl;
	func(val) = 30;
	cout << val << endl;

	cout << func2(30) << endl;
	//func2(30) = 40;

	system("pause");
	return 0;
}