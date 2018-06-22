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
// 合法
// arry[index]是在get函数外存在的对象
// 所以返回值引用的对象在get函数结束后依然存在

// 该函数返回数组arry的下标index的引用
int &get(int *arry, int index)
{
	return arry[index];
}
int main()
{
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;
	system("pause");
	return 0;
}