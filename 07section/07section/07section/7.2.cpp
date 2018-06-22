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

int main()
{
	Sales_data total; // 保存当前求和的结果的变量
	if (read(cin, total)) { // 读入第一笔交易
		Sales_data trans; // 保存下一跳交易数据的变量
		while (read(cin, trans)) { // 读入剩余的交易
			if (total.isbn() == trans.isbn()) // 检查isbn
				total.combine(trans); // 更新变量total当前的值
			else {
				print(cout, total) << endl; // 输出结果
				total = trans; // 处理下一本书
			}
		}
		print(cout, total) << endl; // 输出最后一条交易
	}
	else { // 没有输入任何信息
		cerr << "No data?!" << endl; // 通知用户
	}

	system("pause");
	return 0;
}