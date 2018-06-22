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
	//+运算符的优先级大于==运算符和?:运算符
	//所以是先将s+s[s.size()-1]再计算?:运算符
	//无法比较string类和char类型，所以不合法
	string s = "word";
	//string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	//修改
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	system("pause");
	return 0;
}