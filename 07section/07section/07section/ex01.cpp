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

#pragma region my Sales_data
//struct Sales_data {
//	std::string bookNo;
//	unsigned int units_sole = 0;
//	double revenue = 0.0;
//
//	string isbn()
//	{
//		return bookNo;
//	}
//
//	void combine(Sales_data sd)
//	{
//		revenue += sd.revenue;
//		units_sole += sd.units_sole;
//	}
//};
//
//istream &read(istream &istr, Sales_data &sd) {
//	istr >> sd.bookNo >> sd.units_sole >> sd.revenue;
//	sd.revenue *= sd.units_sole;
//	return istr;
//}
//
//ostream &print(ostream &ostr, Sales_data sd)
//{
//	ostr << sd.bookNo << " " << sd.units_sole << " " << sd.revenue << " " << sd.revenue / sd.units_sole;
//	return ostr;
//}
#pragma endregion

struct Sales_data {
	// 新增的构造函数
	Sales_data() = default;
	Sales_data(const std::string &s) :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &);
	// 新成员：关于Sales_data对象的操作
	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	// 数据成员和2.6.1节(64页)相比没有改变
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// Sales_data的非成员接口函数
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // 把rhs的成员加到this对象的成员上
	revenue += rhs.revenue;
	return *this; // 返回调用该函数的对象
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs; // 把lhs的数据成员拷贝给sum
	sum.combine(rhs); // 把rhs的数据成员加到sum当中
	return sum;
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read函数的作用是从is中读取一条交易信息然后存入this对象中
}

int main()
{
#pragma region 7.1.1
	//Sales_data total; // 保存当前求和的结果的变量
//if (read(cin, total)) { // 读入第一笔交易
//	Sales_data trans; // 保存下一跳交易数据的变量
//	while (read(cin, trans)) { // 读入剩余的交易
//		if (total.isbn() == trans.isbn()) // 检查isbn
//			total.combine(trans); // 更新变量total当前的值
//		else {
//			print(cout, total) << endl; // 输出结果
//			total = trans; // 处理下一本书
//		}
//	}
//	print(cout, total) << endl; // 输出最后一条交易
//}
//else { // 没有输入任何信息
//	cerr << "No data?!" << endl; // 通知用户
//}  
#pragma endregion



	system("pause");
	return 0;
}