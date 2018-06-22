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

// a.第二条将形参声明为顶层const类型，但是两条声明不能有不同的定义语句，因此只能实现一个
int calc(int, int);
int calc(const int, const int);

// b.第二条为非法声明，函数重载不能只有返回值不同
//int get();
//double get();

// c.第二条声明重载reset函数，参数类型与返回值类型都不同
int *reset(int *);
double *reset(double *);

int main()
{
	int i = 10, j = 20;
	cout << calc(i, j) << endl;
	system("pause");
	return 0;
}
//int calc(int val1, int val2) {
//	return val1 + val2;
//}
int calc(int val1, int val2) {
	return val1 * val2;
}
