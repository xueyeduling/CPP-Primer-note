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
typedef string::size_type sz;

struct Sales_data {
	std::string bookNo;
	unsigned int units_sole = 0;
	double revenue = 0.0;

	string isbn() const;

	Sales_data & Sales_data::combine(const Sales_data &sd);
};

string Sales_data::isbn() const {
	return bookNo;
}
Sales_data & Sales_data::combine(const Sales_data &sd)
{
	revenue += sd.revenue;
	units_sole += sd.units_sole;
	return *this;
}

istream &read(istream &istr, Sales_data &sd) {
	istr >> sd.bookNo >> sd.units_sole >> sd.revenue;
	sd.revenue *= sd.units_sole;
	return istr;
}

ostream &print(ostream &ostr, Sales_data sd)
{
	ostr << sd.bookNo << " " << sd.units_sole << " " << sd.revenue << " " << sd.revenue / sd.units_sole;
	return ostr;
}

Sales_data sum(Sales_data lhs, Sales_data rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

int main()
{
	Sales_data data1, data2;
	// 条件部分的作用是：同时正确的读入了data1和data2则为真，否则为假
	if (read(read(cin, data1), data2))
	{
		cout << "真" << endl;
	}
	else
	{
		cout << "假" << endl;
	}
	

	system("pause");
	return 0;
}