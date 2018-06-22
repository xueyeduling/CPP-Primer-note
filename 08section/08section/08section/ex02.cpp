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
using std::ofstream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::istringstream;
using std::ostringstream;
using std::stringstream;

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

int main(int argc, char *argv[])
{
	/*std::ofstream fstrm("test.txt");

	if (fstrm.is_open())
		fstrm << "haha" << endl;
	fstrm.close();*/

	//ifstream input(argv[1]);	// 打开销售记录文件
	//ofstream output(argv[2]);	// 打开输出文件
	//Sales_data total;			// 保存销售总额的变量
	//if (read(input, total)) {
	//	Sales_data trans;
	//	while (read(input, trans)) {
	//		if (total.isbn() == trans.isbn())
	//			total.combine(trans);
	//		else {
	//			print(output, total) << endl;	// 打印结果
	//			total = trans;					// 处理下一本书
	//		}
	//	}
	//	print(output, total) << endl;	// 打印最后一本书的销售额
	//}
	//else								// 文件中无输入依据
	//	cerr << "No data?!" << endl;

	//string ifile;

	//ifstream in(ifile);	// 构筑一个ifstream并打开给定文件
	//ofstream out;		// 输出文件流未与任何文件相关联
	//out.open(ifile + ".copy");	// 打开指定文件

	//in.close();	// 关闭文件
	//in.open(ifile + "2");	// 打开另一个文件

	// 对每个传递给程序的文件执行循环操作
	//for (auto p = argv + 1; p != argv + argc; ++p)
	//{
	//	ifstream input(*p);	// 创建输出流并打开文件
	//	if (input) {		// 如果文件打开成功，"处理"此文件
	//		process(input);
	//	}
	//	else
	//		cerr << "couldn't open: " << string(*p);
	//}	// 每个循环步input都会离开作用域，因此会被销毁


	// 在这几条语句中，file1都被截断
	//ofstream out("file1");	// 隐含以输出模式打开文件并截断文件
	//ofstream out2("file1", ofstream::out);	// 隐含地截断文件
	//ofstream out3("file1", ofstream::out | ofstream::trunc);
	//// 为了保留文件内容，我们必须显示指定app模式
	//ofstream app("file2", ofstream::app);	// 隐含为输出模式
	//ofstream app2("file2", ofstream::out | ofstream::app);

	//out << "haha" << endl;
	//out2 << "xixi" << endl;
	//out3 << "hehe" << endl;


	//ofstream out;	// 未指定文件打开模式
	////out.open("scratchpad");	// 模式隐含设置为输出和截断
	////out.close();	// 关闭out，以便我们将其用于其他文件
	//out.open("file1", ofstream::ate);	// 模式为输出和追加
	//out.close();



	system("pause");
	return 0;
}