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

// a. 第二组声明后，类型匹配或可以转换的常量实参将调用第二组声明
int calc(int&, int&);
int calc(const int&, const int&);

// b. 第二组声明后，类型匹配或可以转换的常量实参将调用第二组声明
//int calc(char*, char*);
//int calc(const char*, const char*);

// c. 第二组声明没有用，因为顶层const会被忽略，所以构成重复声明
int calc(char *, char *);
int calc(char* const, char* const);

int main()
{

	system("pause");
	return 0;
}

int calc(char *, char *) {
	return -1;
}