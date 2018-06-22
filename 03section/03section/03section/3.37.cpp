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

//程序想要输出ca中的所有字符，但是ca没有字符串结尾符，所以会打印到未指定区域的
int main()
{
	const char ca[] = {'h','e','l','l','o'};
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	system("pause");
	return 0;
}