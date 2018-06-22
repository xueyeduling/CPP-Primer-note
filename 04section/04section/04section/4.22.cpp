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
	//使用if语句的更好理解，条件更加清晰
	int grade = 80;
	string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	if (grade > 90)
		finalgrade = "high pass";
	else if (grade < 60)
		finalgrade = "fail";
	else if (grade < 75)
		finalgrade = "low pass";
	else
		finalgrade = "pass";
	system("pause");
	return 0;
}