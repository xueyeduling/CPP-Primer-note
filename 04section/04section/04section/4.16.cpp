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
	//a.赋值运算的优先级比比较运算的低
	//if (p = getPtr() != 0)
	//b.i=1024恒为真，先将1024赋值给i，再判断的if(i)
	//if(i=1024)
	system("pause");
	return 0;
}