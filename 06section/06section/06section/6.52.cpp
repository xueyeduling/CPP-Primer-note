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

void manip(int, int);
double dobj;

int main()
{
	// a. manip('a', 'z') 'a'和'z'都是类型提升，3级转换
	manip('a', 'z');
	// b. manip(55.6, dobj) 55.6算术类型转换，4级，dobj精确匹配
	manip(55.6, dobj);
	system("pause");
	return 0;
}