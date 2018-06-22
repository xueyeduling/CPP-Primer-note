#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // 定义main函数返回类型EXIT_FAILURE和EXIT_SUCCESS
#include <cassert> // 定义assert
#include <fstream>
#include <sstream>
#include <list>
#include <array>
#include <deque>
#include <forward_list>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::iostream;
using std::istream;
using std::ostream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
using std::list;
using std::deque;
using std::array;
using std::forward_list;

typedef string::size_type sz;

void Func(forward_list<string> &fls, string strPrev, string strInsert)
{
	forward_list<string>::iterator prev = fls.before_begin();
	forward_list<string>::iterator curr = fls.begin();

	while (curr != fls.end())
	{
		if (*curr == strPrev)
		{
			fls.insert_after(prev, strInsert);
			return;
		}
		else
			prev = curr++;
	}
	fls.insert_after(prev, strInsert);
}

int main()
{
	forward_list<string> fls{ "哈哈","嘻嘻","呵呵哒" };

	Func(fls, "嘻嘻", "111");
	for (auto var : fls)
	{
		cout << var << " ";
	}
	cout << endl;
	Func(fls, "什么哦", "222");
	for (auto var : fls)
	{
		cout << var << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}