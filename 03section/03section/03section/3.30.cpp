#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t类型
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	// 应该是ix<array_size，不应该是<=
	constexpr size_t array_size = 10;
	int ia[array_size];
	//for (size_t ix = 0; ix <= array_size; ix++)
	for (size_t ix = 0; ix < array_size; ix++)
		ia[ix] = ix;
	system("pause");
	return 0;
}