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

// 如果改为if(val != 0)，将会多递归一次

// 计算val的阶乘，即1 * 2 * 3... * val
int factorial(int val)
{
	if (val != 0)
		return val*factorial(val - 1);
	return 1;
}

int main()
{
	cout << factorial(6) << endl;
	system("pause");
	return 0;
}