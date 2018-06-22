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

/*
对list不适用：因为只有vector和string的迭代器支持+=,-=,+n,-n,>,<,<=,>=,迭代器相减
对forward_list不适用：因为forwward_list有独特的添加和删除函数insert_after,erase_after
*/
int main()
{
	list<int> iv = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = iv.begin();
	while (iter != iv.end()) {
		if (*iter % 2) {
			iter = iv.insert(iter, *iter);
			advance(iter, 2);
		}
		else
			iter = iv.erase(iter);
	}
	for (auto var : iv)
	{
		cout << var << " ";
	}
	cout << endl;

	forward_list<int> fli = { 0,1,2,3,4,5,6,7,8,9 };
	auto prev = fli.before_begin();
	auto curr = fli.begin();
	while (curr != fli.end()) {
		if (*curr % 2) {
			fli.insert_after(prev, *curr);
			++curr;
			advance(prev, 2);
		}
		else
			curr = fli.erase_after(prev);
	}
	for (auto var : fli)
	{
		cout << var << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}