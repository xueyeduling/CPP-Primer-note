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

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

decltype(odd) &arrPty(int i)
{
	return (i % 2) ? odd : even;
}

int main()
{
	int(&arr)[5] = arrPty(3);
	for (auto tmp : arr)
		cout << tmp << endl;
	system("pause");
	return 0;
}