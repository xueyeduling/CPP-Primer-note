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

	Sales_data myadd(const Sales_data &lhs) const
	{
		Sales_data sum = lhs; // 把lhs的数据成员拷贝给sum
		sum.combine(*this); // 把rhs的数据成员加到sum当中
		return sum;
	}
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

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.myadd(rhs);
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read函数的作用是从is中读取一条交易信息然后存入this对象中
}

class ConstRef {
public:
	ConstRef(int ii);
private:
	int i;
	const int ci = 1;
	int &ri = i;
};
// 错误：ci和ri必须被初始化
//ConstRef::ConstRef(int ii)
//{ // 赋值：
//	i = ii;
//	ci = ii;
//	ri = i;
//}
// 正确：显示地初始化引用和const成员
ConstRef::ConstRef(int ii) :i(ii), ci(ii), ri(i) {}

class X {
	int i;
	int j;
public:
	// 未定义的：i在j之前被初始化
	X(int val) :j(val), i(j) {}
};


class Debug {
public:
	constexpr Debug(bool b = true) :hw(b), io(b), other(b) {}
	constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
	constexpr bool any() const { return hw || io || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_other(bool b) { other = b; }
private:
	bool hw;		// 硬件错误，而非IO错误
	bool io;		// IO错误
	bool other;		// 其他错误
};

int main()
{
	//ConstRef con(1);

	//Sales_data obj();	// 正确：定义了一个函数而非对象
	//if(obj.isbn()==Primer_5th_ed.isbn())	// 错误：obj是一个函数

	//// 错误：需要用户定义的两种转换：
	//// 1.把"9-999-99999-9"转换成string
	//// 2.再把这个(临时的)string转换成Sales_data
	Sales_data item;
	string null_book("9-999-99999-9");
	//item.combine("9-999-99999-9");

	// 正确：显示地转换成string，隐式的转换成Sales_data
	//item.combine(string("9-999-99999-9"));
	// 正确：隐式地转换成string，显示地转换成Sales_data
	//item.combine(Sales_data("9-999-99999-9"));

	// 正确：实参是一个显示构造的Sales_data对象
	//item.combine(Sales_data(null_book));
	// 正确：static_cast可以使用explicit的构造函数
	//item.combine(static_cast<Sales_data>(cin));

	constexpr Debug io_sub(false, true, false);
	if (io_sub.any())
		cerr << "print appropriate error messages" << endl;
	constexpr Debug prod(false);
	if (prod.any())
		cerr << "print an error message" << endl;

	system("pause");
	return 0;
}

#pragma region 7.5.1默认实参和构造函数
//class Sales_data {
//public:
//	// 定义默认构造函数，令其与只接收一个string实参的构造函数功能相同
//	Sales_data(std::string s = "") :bookNo(s) {}
//	// 其他构造函数与之前一致
//	Sales_data(std::string s, unsigned cnt, double rev) :
//		bookNo(s), units_sold(cnt), revenue(rev*cnt) {}
//	Sales_data(std::istream &is) { read(is, *this); }
//	// 其他成员与之前的版本一致
//};  
#pragma endregion

#pragma region 7.5.2委托构造函数
				//class Sales_data {
//public:
//	// 非委托构造函数使用对应的实参初始化成员
//	Sales_data(std::string s, unsigned cnt, double price) :
//		bookNo(s), units_sold(cnt), revenue(cnt*price) {}
//	// 其余构造函数全部委托给另一个构造函数
//	Sales_data() :Sales_data("", 0, 0) {}
//	Sales_data(std::string s) :Sales_data(s, 0, 0) {}
//	Sales_data(std::istream &is) :Sales_data()
//	{
//		read(is, *this);
//	}
//	// 其他成员与之前的版本一致
//};  
#pragma endregion

#pragma region 7.5.3默认构造函数的作用
				//class NoDefault {
//public:
//	NoDefault(const std::string&);
//	// 还有其他成员，但是没有其他构造函数了
//};
//struct A {	// 默认情况下my_mem是public的
//	NoDefault my_mem;
//};
//A a;		// 错误：不能为A合成构造函数
//struct B {
//	B() {}	// 错误：b_member没有初始值
//	NoDefault b_member;
//};  
#pragma endregion

#pragma region 7.5.4 隐式的类类型转换
//class Sales_data {
//public:
//	Sales_data() = default;
//	Sales_data(const std::string &s, unsigned n, double p) :
//		bookNo(s), units_sold(n), revenue(p*n) {}
//	explicit Sales_data(const std::string &s) :bookNo(s) {}
//	explicit Sales_data(std::istream&);
//	// 其他成员与之前的版本一致
//};
//
//item.combine(null_book);	// 错误：string构造函数是explicit的
//item.combine(cin);			// 错误：istream构造函数是explicit的

// 错误：explicit关键字只能出现在类内的构造函数声明处
//explicit Sales_data::Sales_data(std::istream &is)
//{
//	read(is, *this); // read函数的作用是从is中读取一条交易信息然后存入this对象中
//}

//Sales_data item1(null_book);	// 正确：直接初始化
//// 错误：不能将explicit构造函数用于拷贝形式的初始化过程
//Sales_data item2 = null_book;  
#pragma endregion

#pragma region 7.5.5 聚合类
				//struct Data {
//	int ival;
//	string s;
//};
//val1.ival = 0; val1.s = string("Anna");
//Data val1 = { 0,"Anna" };
//// 错误：不能使用"Anna"初始化ival，也不能使用1024初始化s
//Data val2 = { "Anna",1024 };  
#pragma endregion
