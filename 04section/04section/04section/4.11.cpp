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
	int a = 1, b = 2, c = 3, d = 4;
	/*cout << ((a > b) ? ((b > c) ? ((c > d) ? 1 : 0) : 0) : 0) << endl;*/
	if (a > b&&b > c&&c > d)
	{
		;
	}
	system("pause");
	return 0;
}