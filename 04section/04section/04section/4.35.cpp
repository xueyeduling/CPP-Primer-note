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
	char cval; int ival; unsigned int ui;
	float fval; double dval;
	// a. 'a'转换为int，然后相加的结果转换为char
	cval = 'a' + 3;
	// b. ival转换为double,然后unsigned int转换为double,然后相减后结果转换为float
	fval = ui - ival*1.0;
	// c. ui转换为double,fval转换为double
	dval = ui*fval;
	// d. ival转换为float，然后相加的结果转换为double，然后转换为char
	cval = ival + fval + dval;
	system("pause");
	return 0;
}