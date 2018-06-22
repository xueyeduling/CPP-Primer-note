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
// 该代码只能作用于有10个元素的数组
//void print(const int ia[10])
//{
//	for (size_t i = 0; i != 10; ++i)
//		cout << ia[i] << endl;
//}

// 修改
void print(const int ia[])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
int main()
{
	int nums[10] = { 0,1,2,3,4,5,6,7,8,9 };
	print(nums);
	system("pause");
	return 0;
}