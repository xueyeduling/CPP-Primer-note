#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>
#include <iterator>
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib>
#include <cassert>
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

class Sales_data
{
	// 为Sales_data的非成员函数所做的友元声明
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend istream &read(istream&, Sales_data&);
	friend ostream &print(ostream&, const Sales_data&);
public:		// 添加了访问说明符
			// 定义默认构造函数，令其与只接受一个string实参的构造函数功能相同
	Sales_data(std::string s = "") :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream&);
	std::string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);

private:	// 添加了访问说明符
	double avg_price() const { return units_sold ? revenue / units_sold : 0; }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	istream &myread(istream &is)
	{
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price*units_sold;
		return is;
	}

	ostream &myprint(ostream &os) const
	{
		os << isbn() << " " << units_sold << " " << revenue << " " << avg_price();
		return os;
	}

	//Sales_data myadd(const Sales_data &lhs) const
	//{
	//	Sales_data sum = lhs; // 把lhs的数据成员拷贝给sum
	//	sum.combine(*this); // 把rhs的数据成员加到sum当中
	//	return sum;
	//}
};

// Sales_data接口的非成员组成部分的声明
Sales_data add(const Sales_data&, const Sales_data&);
istream &read(istream&, Sales_data&);
ostream &print(ostream&, const Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold; // 把rhs的成员加到this对象的成员上
	revenue += rhs.revenue;
	return *this; // 返回调用该函数的对象
}

istream &read(istream &is, Sales_data &item)
{
	return item.myread(is);
}

ostream &print(ostream &os, const Sales_data &item)
{
	return item.myprint(os);
}

//Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
//{
//	return lhs.myadd(rhs);
//}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read函数的作用是从is中读取一条交易信息然后存入this对象中
}

int main()
{

	system("pause");
	return 0;
}

// 调用i.combine(s)，其中i是一个Sales_data，而s是一个string对象 

// 调用构造函数使用s生成一个临时Sales_data变量
// 将临时Sales_data变量传入combine方法中，使用值传递
// combine调用完毕后，销毁临时Sales_data对象
Sales_data &combine(Sales_data);

// 这个会报错，因为临时的对象作为非引用传入方法，可能会改变临时变量的值
// 临时变量在combine调用完毕后就会销毁，所以改变它的值没用，所以不能这样调用
Sales_data &combine(Sales_data&);

// 调用构造函数使用s生成一个临时Sales_data变量
// 将临时Sales_data变量传入combine方法中，使用常量引用传递
// combine调用完毕后，销毁临时Sales_data对象
Sales_data &combine(const Sales_data&) const;