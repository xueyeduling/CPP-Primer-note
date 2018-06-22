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
	vector<int> iv = { 1,2,3,4,5,6,7 };
	vector<int>::iterator iter = iv.begin(),
		mid = iv.begin() + iv.size() / 2;

	// 问题：一旦进入wahile，永远不会退出
	//		iter和mid会在insert后失效
	int some_val = 2;
	while (iter != mid)
		if (*iter == some_val) {
			iter = iv.insert(iter, 2 * some_val);
			mid = iv.begin() + iv.size() / 2;
			iter += 2;
		}
		else
			++iter;

	for (auto var : iv)
	{
		cout << var << endl;
	}

	system("pause");
	return 0;
}