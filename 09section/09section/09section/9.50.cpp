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
using std::to_string;

typedef string::size_type sz;

int main()
{
	vector<string> vecsi = { "1","2","3","4","5","6" };
	vector<string> vecsf({ "1.1","2.1","3.1","4.1","5.1","6.1" });
	int counti = 0;
	float countf = 0;
	for (auto var : vecsi)
	{
		counti += stoi(var);
	}

	for (auto var : vecsf)
	{
		countf += stof(var);
	}

	cout << "整型和为：" << counti << endl;
	cout << "浮点型和为：" << countf << endl;

	system("pause");
	return 0;
}