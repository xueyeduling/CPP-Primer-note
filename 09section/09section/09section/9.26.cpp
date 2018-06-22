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

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	int size = sizeof(ia) / sizeof(ia[0]);
	vector<int> vec(ia, ia + size);
	list<int> lst(ia, ia + size);

	//for (size_t i = 0; i != sizeof(ia) / sizeof(ia[0]); ++i)
	//{
	//	vec.push_back(ia[i]);
	//	lst.push_back(ia[i]);
	//}

	for (auto beg = vec.begin(); beg != vec.end(); )
	{
		if (*beg % 2 == 0)
			beg = vec.erase(beg);
		else
			++beg;
	}

	for (auto beg = lst.begin(); beg != lst.end();)
	{
		if (*beg % 2 != 0)
			beg = lst.erase(beg);
		else
			++beg;
	}

	for (auto var : vec)
	{
		cout << var << " ";
	}
	cout << endl;

	cout << "------------------------------------" << endl;

	for (auto var : lst)
	{
		cout << var << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}