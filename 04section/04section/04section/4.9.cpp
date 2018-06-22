#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	// 先判断cp是否是空指针，当cp不是空指针的时候
	// 判断*cp是否为0，也就是cp所指向字符串的第一个字符是否是结束符

	const char *cp = "Hello World";
	if (cp&&*cp)
	{
		;
	}
	system("pause");
	return 0;
}