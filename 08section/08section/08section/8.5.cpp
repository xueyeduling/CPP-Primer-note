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
using std::istream;
using std::ostream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;

typedef string::size_type sz;

vector<string> Func(string file)
{
	ifstream fin(file);
	vector<string> vec;
	if (fin.is_open())
	{
		string tmp;
		while (fin >> tmp)
		{
			vec.push_back(tmp);
		}
	}
	return vec;
}

int main()
{
	vector<string> vec = Func("8.4test.txt");
	for (auto str : vec)
	{
		cout << str << endl;
	}

	system("pause");
	return 0;
}