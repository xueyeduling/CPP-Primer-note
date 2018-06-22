#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
int main()
{
	// 传递类型很大，函数在确定不会改变实参的值时，应该使用常量引用形参
	// 如果形参应该为常量引用，而我们将其设为普通引用，那么不能传递const对象，需要转换类型的对象，字面值等
	system("pause");
	return 0;
}