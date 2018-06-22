#define _CRT_SECURE_NO_WARNINGS
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
using std::stringstream;
using std::istringstream;
using std::ostringstream;

typedef string::size_type sz;

istringstream &Func(istringstream &istr)
{
	char ch;
	while (istr >> ch)
		cout << ch;
	cout << endl;
	istr.clear();
	return istr;
}

int main(void)
{
	string str("haha xixi heheda gaga ");
	istringstream iss(str);
	Func(iss);
	istringstream iss2 = iss;

	ostringstream oss(str);
	ostringstream oss2 = oss;

	stringstream ss(str);
	stringstream ss2 = ss;

	system("pause");
	return 0;
}