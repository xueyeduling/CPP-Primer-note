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
	//a. for循环sz次

	//for (int ix = 0; ix != sz; ++ix) { /* ... */ }
	//if( ix != sz )
	//	//...

	// ix是定义在for循环内的，所以循环外的if语句不能访问ix
	// 修改：
	//int ix;
	//for (ix = 0; ix != sz; ++ix) { /* ... */ }
	//if( ix != sz )
	//	//...

	//b. for循环sz次吧...

	//int ix;
	//for (ix != sz; ++ix) { /*...*/ }

	// ix没有初始化啊，而且for少了第一个;
	// 修改

	//int ix=0;
	//for (; ix != sz; ++ix) { /*...*/ }

	//c. 应该还是想循环sz次吧
	//for (int ix = 0; ix != sz; ++ix, ++sz) {/*...*/ }

	// 感觉停不下来了
	// 修改
	for (int ix = 0; ix != sz; ++ix) {/*...*/ }

	system("pause");
	return 0;
}