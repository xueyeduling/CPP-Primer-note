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
#include <cassert> // 定义assert
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
typedef string::size_type sz;

void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
	// a. f(2.56, 42)
	// 可行函数 f(int, int); f(doube, double = 3.14);
	// 无最佳匹配，二义性
	// f(2.56, 42);

	// b. f(42)
	// 可行函数 f(int); f(double, double=3.14);
	// 最佳匹配f(int);
	f(42);

	// c. f(42, 0);
	// 可行函数 f(int, int); f(double, double=3.14);
	// 最佳匹配 f(int, int)
	f(42, 0);

	// d. f(2.56, 3.14)
	// 可行函数 f(int, int); f(double, double=3.14);
	// 最佳匹配 f(double, double=3.14);
	f(2.56, 3.14);

	system("pause");
	return 0;
}

void f() {
	cout << "The function is f()" << endl;
}
void f(int val1) {
	cout << "The function is f(int)" << endl;
}
void f(int val1, int val2) {
	cout << "The function is f(int, int)" << endl;
}
void f(double val1, double val2) {
	cout << "The function is f(double, double = 3.14)" << endl;
}