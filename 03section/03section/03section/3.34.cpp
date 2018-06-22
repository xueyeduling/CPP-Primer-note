#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

//程序任何情况下都合法
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int *p1 = arr;
	int *p2 = arr + 2;
	p1 += p2 - p1;
	cout << *p1 << endl;
	system("pause");
	return 0;
}