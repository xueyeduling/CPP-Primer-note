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
	// 使用指针和下标遍历数组
	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	for (int *ptr = ia, ix=0; ix!=size&&ptr!=ia+size; ++ix,++ptr)
	{
		/* ...*/
	}
	system("pause");
	return 0;
}