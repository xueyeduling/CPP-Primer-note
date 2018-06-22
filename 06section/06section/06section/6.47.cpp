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
#define NDEBUG
void func(vector<string> &svec, vector<string>::iterator &iter)
{
	if (iter != svec.end())
		func(svec, ++iter);
	else
		return;
#ifndef NDEBUG
	cout << svec.size() << endl;
#endif
	cout << *--iter << endl;
}

int main()
{
	vector<string> svec = { "haha","xixi","hehe","gaga" };
	func(svec, svec.begin());
	system("pause");
	return 0;
}