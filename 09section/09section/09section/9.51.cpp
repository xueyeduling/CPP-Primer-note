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

class MyData
{
public:
	MyData(string data)
	{
		month = 0;
		vector<string> months{ "January","February","March",
		"April","May","June","July","August","September",
		"October","November","December" };
		string nums = "0123456789";
		for (size_t i = 0; i != months.size(); ++i)
		{
			if (data.find(months[i]) != string::npos || data.find(months[i].substr(0, 3)) != string::npos)
			{
				month = i + 1;
			}
		}
		size_t pos1;
		size_t pos2;
		pos1 = data.find_first_of(nums);
		if (month == 0) {
			month = std::stoi(data.substr(pos1), &pos2, 10);
			pos1 += ++pos2;
			day = std::stoi(data.substr(pos1), &pos2, 10);
			pos1 += ++pos2;
			year = std::stoi(data.substr(pos1));
		}
		else {
			day = std::stoi(data.substr(pos1), &pos2, 10);
			pos1 += ++pos2;
			year = std::stoi(data.substr(pos1));
		}
	}
public:
	unsigned year;
	unsigned month;
	unsigned day;
};

int main()
{
	MyData da("1/1/1990");
	cout << da.year << endl << da.month << endl << da.day << endl;
	cout << "-------------------------------" << endl;

	MyData da2("January 10,1990");
	cout << da2.year << endl << da2.month << endl << da2.day << endl;
	cout << "-------------------------------" << endl;

	MyData da3("May 10 2018");
	cout << da3.year << endl << da3.month << endl << da3.day << endl;
	cout << "-------------------------------" << endl;

	system("pause");
	return 0;
}