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

int add(int val1, int val2);
int sub(int val1, int val2);
int mul(int val1, int val2);
int div(int val1, int val2);

int main()
{
	vector<int(*)(int, int)> fvec;
	fvec.push_back(add);
	fvec.push_back(sub);
	fvec.push_back(mul);
	fvec.push_back(div);
	system("pause");
	return 0;
}

int add(int val1, int val2)
{
	return val1 + val2;
}
int sub(int val1, int val2)
{
	return val1 - val2;
}
int mul(int val1, int val2)
{
	return val1 * val2;
}
int div(int val1, int val2)
{
	return val1 / val2;
}