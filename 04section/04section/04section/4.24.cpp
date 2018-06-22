//finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
//如果条件是左结合律，将会把(grade > 90) ? "high pass" : (grade < 60)的结果作为右边?:运算的一部分
//等价与finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
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
	int grade = 80;
	string finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass";
	system("pause");
	return 0;
}