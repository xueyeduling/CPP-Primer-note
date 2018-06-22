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
int main()
{
	// 这个循环是想在s输入错误，cin状态为无效时并且s不等于sought时退出循环
	// 这个时候可以判断cin肯定是为false的，所以assert必定会触发
	// 但是assert显然不是这么使用的，assert内的条件应该是不能触发的条件
	// So 不合理
	string s;
	while (cin >> s&&s != sought) {}// 空函数体
	assert(cin);
	system("pause");
	return 0;
}