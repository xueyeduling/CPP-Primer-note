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
void print(const int *beg, int *end)
{
	while (beg != end)
		cout << *beg++ << endl;
}
void print(const int *beg, int n)
{
	for (size_t i = 0; i != n; i++)
		cout << beg[i] << endl;
}
int main()
{
	int i = 0, j[2] = { 0,1 };
	//print(&i, &i + 1);
	//print(begin(j), end(j));
	print(&i, 1);
	print(j, 2);
	system("pause");
	return 0;
}