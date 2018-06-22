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
	vector<string> svec;
	vector<string>::iterator iter = svec.begin();
	//a.合法，取iter的值，将iter加一
	*iter++;
	//b.不合法，想要将iter指向的成员取出然后+1，string对象无法加1
	(*iter)++;
	//c.不合法，*运算符的优先级低于.运算符，所以企图访问迭代器的empty()成员，迭代器没有该成员
	*iter.empty();
	//d.合法，相当与(*iter).empty()
	iter->empty();
	//e.不合法，想要将*iter取出的对象string递增
	++*iter;
	//f.合法，访问(*iter).empty()，然后将iter递增
	iter++->empty();
	system("pause");
	return 0;
}