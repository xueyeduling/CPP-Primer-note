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

//概述
void ex00()
{
	//list<Sales_data>	// 保存Sales_data对象的list
	//deque<double>		// 保存double的deque

	//vector<vector<string>> lines; // vector的vector

	// 假定noDefault是一个没有默认构造函数的类型
	//vector<noDefault> v1(10, init); // 正确：提供了元素初始化器
	//vector<noDefault> v2(10); // 错误：必须提供一个元素初始化器

#pragma region 类型别名
	/*vector<int> vi(2);
	vector<int>::iterator it = vi.begin();
	vector<int>::const_iterator cit = vi.end();

	vector<int>::size_type i;
	vector<int>::difference_type di;

	vector<int>::value_type ii;

	vector<int>::reference rii = vi[0];
	vector<int>::const_reference cri = vi[0];*/
#pragma endregion

#pragma region 构造函数
	vector<int> vec(10);
	for (size_t i = 0; i != 10; ++i)
	{
		vec[i] = i;
	}

	for (auto var : vec)
	{
		cout << var << endl;
	}

	//vector<int> vecc(20);

	vector<int> vec2(vec.begin() + 5, vec.end());//vecc.end()
	for (auto var : vec2)
	{
		cout << var << endl;
	}

	vector<int> vec3{ 10,11,12,13 };
	for (auto iter = vec3.begin(); iter != vec3.end(); ++iter)
	{
		cout << *iter << endl;
	}
#pragma endregion

#pragma region 赋值与swap
	/*vector<int> vec{ 1,2,3,4 };
	vector<int> vec2{ 9,8,7,6 };

	vector<int> vec3;
	vec3 = vec;
	vec3.swap(vec2);

	vec3 = { 6,66,666 };

	swap(vec3, vec2);*/
#pragma endregion

#pragma region 大小
	/*vector<int> vec(10);
	cout << vec.size() << endl;
	cout << vec.max_size() << endl;
	cout << vec.empty() << endl;*/
#pragma endregion

#pragma region 添加/删除元素(不适用于array)
	//vector<int> vec(3, 2);
	//vec.insert(vec.begin() + 1, 1);
	//for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	////vec.emplace();

	//vec.erase(vec.begin());
	//for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//vec.clear();
	//for (auto iter = vec.begin(); iter != vec.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}
#pragma endregion

#pragma region 获取迭代器
	/*vector<int> vec(3);

	auto iter1 = vec.cbegin();
	auto iter2 = vec.rbegin();*/
#pragma endregion
}

void ex01()
{
	vector<int> vec(3);
	int val = 10;
	auto begin = vec.begin();
	auto end = vec.end();
	while (begin != end) {
		*begin = val;	// 正确：范围非空，因此begin指向第一个元素
		++begin;	// 移动迭代器，获取下一个元素
	}
}

void ex02()
{
	// iter是通过list<string>定义的一个迭代器类型
	list<string>::iterator iter;
	// count是通过vector<int>定义的一个difference_type类型
	vector<int>::difference_type count;
}

void ex03()
{
	list<string> a = { "玄音","海棠","雨瑶" };
	auto it1 = a.begin();	// list<string>::iterator
	auto it2 = a.rbegin();	// list<string>::reverse_iterator
	auto it3 = a.cbegin();	// list<string>::const_iterator
	auto it4 = a.crbegin();	// list<string>::const_reverse_iterator

	// 显示指定类型
	list<string>::iterator it5 = a.begin();
	list<string>::const_iterator it6 = a.begin();
	// 是iterator还是const_iterator依赖于a的类型
	auto it7 = a.begin();	// 仅当a是const时，it7是const_iterator
	auto it8 = a.cbegin();	// it8是const_iterator
}

void ex04()
{
	//array<int, 5> arr;

	// 每个容器有三个元素，用给定的初始化器进行初始化
	list<string> authors = { "玄音","海棠","雨瑶" };
	vector<const char*> articles = { "a","an","the" };

	list<string> list2(authors); // 正确：类型匹配
	//deque<string> authList(authors); // 错误：容器类型不匹配
	//vector<string> words(articles); // 错误：容器类型必须匹配
	// 正确：可以将const char*元素转换为string
	forward_list<string> words(articles.begin(), articles.end());

	//vector<int> ivec(10, -1); // 10个int元素，每个都初始化为-1
	//list<string> svec(10, "hi"); // 10个strings；每个都初始化为"hi"
	//forward_list<int> ivec(10); // 10个元素，每个都初始化为0
	//deque<string> svec(10); // 10个元素，每个都是空string

	//array<int, 42>;	// 类型为：保存42个int的数组
	//array<string, 10>; // 类型为：保存10个string的数组

	array<int, 10>::size_type i;	// 数组类型包括元素类型和大小
	//array<int>::size_type j;		// 错误：array<int>不是一个类型

	array<int, 10> ia1;	// 10个默认初始化的int，未定义值
	array<int, 10> ia2 = { 0,1,2,3,4,5,6,7,8,9 }; // 列表初始化
	array<int, 10> ia3 = { 42 };	// ia3[0]为42，剩余元素为0

	int digs[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int cpy[10] = digs;	// 错误：内置数组不支持拷贝或赋值
	array<int, 10> digits = { 0,1,2,3,4,5,6,7,8,9 };
	array<int, 10> copy = digits;	// 正确：只要数组类型匹配即合法
}

void ex05()
{
	//c1 = c2;	// 将c1的内容替换为c2中元素的拷贝
	//c1 = { a,b,c };	// 赋值后，c1大小为3

	array<int, 10> a1 = { 0,1,2,3,4,5,6,7,8,9 };
	array<int, 10> a2 = { 1 };	// 所有元素均为0
	a1 = a2;	// 替换a1中的元素
	a2 = { 0 };	// 错误：不能将一个花括号列表赋予数组，C++11可以

	/*for (auto var : a2)
	{
		cout << var << endl;
	}*/

	vector<int> v1{ 1,2,3,4,5,6 };
	vector<int> v2{ 7,8,9 };

	cout << &v1[0] << endl;
	cout << &v2[0] << endl;

	v1.swap(v2);

	cout << &v1[0] << endl;
	cout << &v2[0] << endl;

	/*cout << v1.size() << endl;
	cout << v2.size() << endl;*/

	list<string> names;
	vector<const char*> oldstyle;
	//names = oldstyle;	// 错误：容器类型不匹配
	// 正确：可以将const char*转换为string
	names.assign(oldstyle.cbegin(), oldstyle.cend());

	names.assign({ "玄音", "海棠" });
	for (auto var : names)
	{
		cout << var << endl;
	}

	// 等价与slist1.clear();
	// 后跟slist1.insert(slist1.begin(), 1-, "Hiya!");
	list<string> slist1(1);	// 1个元素，为空string
	slist1.assign(10, "Hiya!");	// 10个元素，每个都是"Hiya!"

	cout << slist1.size() << endl;
	slist1.clear();
	cout << slist1.size() << endl;

	vector<string> svec1(10);	// 10个元素的vector
	vector<string> svec2(24);	// 24个元素的vector
	swap(svec1, svec2);
}

void ex06()
{
	vector<long long> vect;
	cout << vect.max_size() << endl;
	vect.push_back(vect.max_size() + 1);
	cout << vect[0] << endl;
}

void ex07()
{
	//vector<int> v1 = { 1,3,5,7,9,12 };
	//vector<int> v2 = { 1,3,9 };
	//vector<int> v3 = { 1,3,5,7 };
	//vector<int> v4 = { 1,3,5,7,9,12 };
	//v1 < v2		// true
	//v1 < v3		// false
	//v1 == v4	// true
	//v1 == v2	// false

	//vector<Sales_data> storeA, storeB;
	//if (storeA < storeB)	// 错误：Sales_data没有<运算符
	//	
}

int main()
{
	ex07();

	system("pause");
	return 0;
}