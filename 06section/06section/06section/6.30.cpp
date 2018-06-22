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

// VS17:#1会报错，#2警告
// QT5.9:#1会报错，#2警告
// unbutu G++:#1会报错，#2不会警告...
bool str_subrange(const string &str1, const string &str2)
{
	// 大小相同：此时用普通的相等性判断结果作为返回值
	if (str1.size() == str2.size())
		return str1 == str2; // 正确：==运算符返回布尔值
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	// 检查两个string对象的对应字符是否相等，以较短的字符串长度为限
	for (decltype(size) i = 0; i != size; ++i)
	{
		if (str1[i] != str2[i])
			return 1; // 错误 #1：没有返回值，编译器将报告这一错误
	}
	// 错误 #2：控制流可能尚未返回任何值就结束了函数的执行
	// 编译器可能检查不出这一错误
}
int main()
{
	system("pause");
	return 0;
}