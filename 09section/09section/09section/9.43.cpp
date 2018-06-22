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

void ReplaceVal(string &s, const string &oldVal, const string &newVal)
{
	auto beg = s.begin();
	auto first = oldVal.begin();
	auto last = oldVal.end();
	bool flag = false;

	while (beg != (s.end() - oldVal.size() + 1))
	{
		if (*beg == *first)
		{
			auto tmpB = beg + 1;
			auto tmpF = first + 1;
			while (tmpF != last&&*tmpB == *tmpF)
			{
				++tmpB;
				++tmpF;
			}
			if (tmpF == last)
			{
				auto tmpE = beg - 1;
				s.erase(beg, beg + oldVal.size());
				tmpE = s.insert(++tmpE, newVal.begin(), newVal.end());
				beg = tmpE + newVal.size();
				if (beg == s.end())
					break;
				continue;
			}
		}
		++beg;
	}
}

int main()
{
	string s = "abc haha thto shenme tho shazi dongofei tho";
	string s1 = "tho";
	string s2 = "though";
	ReplaceVal(s, s1, s2);

	cout << s << endl;

	system("pause");
	return 0;
}