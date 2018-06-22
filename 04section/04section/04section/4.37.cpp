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
	int i;
	double d;
	const string *ps;
	char *pc;
	void *pv;
	//a.
	pv = (void*)ps;
	pv = const_cast<string*>(ps);
	//b.
	i = int(*pc);
	i = static_cast<int>(*pc);
	//c.
	pv = &d;
	pv = static_cast<void*>(&d);
	//d.
	pc = (char*)pv;
	pc = static_cast<char*>(pv);

	system("pause");
	return 0;
}