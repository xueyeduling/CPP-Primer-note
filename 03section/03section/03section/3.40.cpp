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
	char str1[] = "haha";
	char str2[] = "xixi";
	char str3[1024];
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;
	system("pause");
	return 0;
}