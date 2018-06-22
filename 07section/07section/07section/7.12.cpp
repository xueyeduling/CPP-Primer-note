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
using std::string;
typedef string::size_type sz;

struct Sales_data {
	string bookNo;
	unsigned int units_sole = 0;
	double revenue = 0.0;
	Sales_data(const string &s, unsigned int n, double p) :bookNo(s), units_sole(n), revenue(p*n) { }
	Sales_data(const string &s) :bookNo(s) {}
	Sales_data(istream &istr) {
		istr >> bookNo >> units_sole >> revenue;
		revenue *= units_sole;
	}

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
	system("pause");
	return 0;
}