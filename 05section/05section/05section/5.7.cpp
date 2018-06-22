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
	//a.
	/*int ival1 = 3, ival2 = 3;
	if (ival1 != ival2)
		ival1 = ival2;
	else
		ival1 = ival2 = 0;*/

	//b.
	/*if (ival < minval) {
		minval = ival;
		occurs = 1;
	}*/

	//c.
	/*int ival;
	if (ival = get_val())
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0\n";*/

	//d.
	/*if (ival == 0)
		ival = get_val();*/


	system("pause");
	return 0;
}