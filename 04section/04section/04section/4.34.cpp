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
	bool flag; char cval;
	short sval; unsigned short usval;
	int ival; unsigned int uival;
	long lval; unsigned long ulval;
	float fval; double dval;

	//a. fval转换为bool
	if(fval){}
	//b. ival转换为float，然后和fval的相加结果转换为double
	dval = fval + ival;
	//c. cval转换为int，然后相乘的结果转换为double
	dval + ival*cval;
	system("pause");
	return 0;
}