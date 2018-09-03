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
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <functional>
#include "Sales_item.h"
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
using std::stack;
using std::queue;
using std::stoi;
using std::stol;
using std::stoll;
using std::stold;
using std::stod;
using std::stof;
using std::stoul;
using std::stoull;
using std::find;
using std::placeholders::_1;
using std::istream_iterator;
using std::ostream_iterator;
using namespace std::placeholders;

typedef string::size_type sz;

// 10.1 概述
void ex01()
{
#pragma region 概述
	//vector<int> vec;

	//int val = 42; // 我们将查找的值
	//// 如果在vec中找到想要的元素，则返回结果指向它，否则返回结果为vec.cend()
	//auto result = find(vec.cbegin(), vec.cend(), val);
	//// 报告结果
	//cout << "The value " << val
	//	<< (result == vec.end()
	//		? " is not present" : " is present") << endl;

	//vector<string> lst;

	//string val = "a value"; // 我们要查找的值
	//// 此调用在list中查找string元素
	//auto result = find(lst.cbegin(), lst.cend(), val);

	/*int ia[] = { 27,210,12,47,109,83 };
	int val = 83;
	int *result = find(begin(ia), end(ia), val);
	cout << *result << endl;*/
#pragma endregion
}

void elimDups(vector<string> &words)
{
	// 按字典序排序words，以便查找重复单词
	sort(words.begin(), words.end());
	// unique重排输入范围，使得每个单词只出现一次
	// 排序在范围的前部，返回指向不重复区域之后一个位置的迭代器
	vector<string>::iterator end_unique = std::unique(words.begin(), words.end());
	// 使用向量操作erase删除重复单词
	words.erase(end_unique, words.end());
}

// 10.2 初识泛型算法
void ex02()
{
#pragma region 只读算法

	//vector<int> vec;
	//// 对vec中的元素求和，和的初值是0
	//int sum = accumulate(vec.cbegin(), vec.cend(), 0.0);

	//vector<string> v;
	//string sum = accumulate(v.cbegin(), v.cend(), string(""));
	//// 错误：const char*上没有定义+运算符
	//string sum = accumulate(v.begin(), v.end(), "");

	/*string str = "haha";
	const char *chs = "haha";
	cout << (chs  == str) << endl;*/

	// roster2中的元素数目应该至少与roster1一样多
	// roster1是vector<string>时，roster2可以是list<const char*>
	//equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
#pragma endregion

#pragma region 写容器的算法
	//std::fill(vec.begin(), vec.end(), 0); // 将每个元素重置为0
	//// 将容器的一个子序列设置为10
	//std::fill(vec.begin(), vec.begin() + vec.size() / 2, 10);

	//vector<int> vec; // 空vector
	//// 使用vec，赋予它不同值
	//std::fill_n(vec.begin(), vec.size(), 0); // 将给定元素重置为0
	//fill_n(dest, n, val);

	//vector<int> vec; // 空向量
	//// 灾难：修改vec中的10个(不存在)元素
	//std::fill_n(vec.begin(), 10, 0);

	//vector<int> vec; // 空向量
	//std::back_insert_iterator<vector<int>> it = std::back_inserter(vec); // 通过它赋值会将元素添加到vec中
	//*it = 42; // vec中现在有一个元素，值为42

	//vector<int> vec; // 空向量
	//// 正确：back_inserter创建一个插入迭代器，可用来向vec添加元素
	//std::fill_n(std::back_inserter(vec), 10, 0);

	//int a1[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int a2[sizeof(a1) / sizeof(*a1)]; // a2和a1大小一样
	//// ret指向拷贝到a2的尾元素之后的位置
	//auto ret = std::copy(begin(a1), end(a1), a2); // 把a1的内容拷贝给a2

	//list<int>	ilst{ 0,1,3,4 };
	//vector<int> ivec;
	//// 使用back_inserter按需要增长目标序列
	//replace_copy(ilst.cbegin(), ilst.cend(), back_inserter(ivec), 0, 42);
#pragma endregion

#pragma region 重排容器元素的算法
	vector<string> svec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDups(svec);
	for (auto var : svec)
	{
		cout << var << " ";
	}
	cout << endl;
#pragma endregion
}

// 比较函数，用来按长度排序单词
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

bool lagerThan5(string str, size_t sz)
{
	return str.size() >= sz;
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words); // 将words按字典序排序，删除重复单词
	// 按长度排序，长度相同的单词维持字典序
	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b)
	{
		return a.size() < b.size();
	});
	// 获取一个迭代器，指向第一个瞒住size()>=sz的元素
	/*auto wc = std::find_if(words.begin(), words.end(),
		[sz](const string &a)
		{
		return a.size() > sz;
		});*/
	// sz为隐式捕获，值捕获方式
	/*wc = std::find_if(words.begin(), words.end(),
		[=](const string &s)
		{return s.size() >= sz; });*/
	auto wc = std::find_if(words.begin(), words.end(),
		bind(check_size, std::placeholders::_1, sz));
	// 计算满足于size>=sz的元素的数目
	auto count = words.end() - wc;
	// 打印长度大于等于给定值的单词，每个单词后面接一个空格
	std::for_each(wc, words.end(),
		[](const string &s)
	{
		cout << s << " ";
	});
}

void fcn1()
{
	size_t v1 = 42; // 局部变量
	// 将v1拷贝到名为f的可调用独享
	auto f = [v1] { return v1; };
	v1 = 0;
	auto j = f(); // j为42；f保存了我们创建它时v1的拷贝
	cout << j << endl;
}

void fcn2()
{
	size_t v1 = 42; // 局部变量
	// 对象f2包含v1的引用
	auto f2 = [&v1] { return v1; };
	v1 = 0;
	auto j = f2(); // j为0；f2保存v1的引用，而非拷贝
	cout << j << endl;
}

//void biggies(vector<string> &words,
//	vector<string>::size_type sz,
//	ostream &os = cout, char c = ' ')
//{
//	// 与之前例子一样的重排words的代码
//	// 打印count的语句改为打印到os
//	std::for_each(words.begin(), words.end(),
//		[&os, c](const string &s) {os << s << c; });
//}

void biggies(vector<string> &words,
	vector<string>::size_type sz,
	ostream &os, char c = ' ')
{
	// 其他处理与前例一样
	// os隐式捕获，引用捕获方式；c显式捕获，值捕获方式
	std::for_each(words.begin(), words.end(),
		[&, c](const string &s) {os << s << c; });
	// os显式捕获，引用捕获方式；c隐式捕获，值捕获方式
	std::for_each(words.begin(), words.end(),
		[=, &os](const string &s) {os << s << c; });
}

void fcn3()
{
	size_t v1 = 42; // 局部变量
	// f可以改变它所捕获的变量的值
	auto f = [v1]()mutable {return ++v1; };
	v1 = 0;
	auto j = f(); // j为43
}

void fcn4()
{
	size_t v1 = 42; // 局部变量
	// v1是一个非const变量的引用
	// 可以通过f2中的引用来改变它
	auto f2 = [&v1] {return ++v1; };
	v1 = 0;
	auto j = f2(); // j为1
}

void print(ostream &os, const string &s, char c)
{
	os << s << c;
}

// 10.3 定制操作
void ex03()
{
	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	//// 按长度由短至长排序
	//sort(words.begin(), words.end(), isShorter);
	//for (auto &var : words)
	//{
	//	cout << var << " ";
	//}
	//cout << endl;

	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	//elimDups(words); // 将word按字典序重排，并消除重复单词
	//// 按长度重新排序，长度相同的单词维持字典序
	//std::stable_sort(words.begin(), words.end(), isShorter);
	//for (const auto &s : words)
	//	cout << s << " ";
	//cout << endl;

	/*vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(words, 5);*/

	/*auto f = [] {int i = 10; int j = 20; return i + j; };
	cout << f() << endl;*/


	/*vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(words, 5);*/
	/*std::stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
	{
	return a.size() < b.size();
	});
	std::for_each(words.begin(), words.end(), [](string s) {cout << s << " "; });*/

	//fcn1();
	//fcn2();
	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };

	//vector<int> vi;
	//std::transform(vi.begin(), vi.end(), vi.begin(),
	//	[](int i) {return i < 0 ? -i : i; });
	//// 错误：不能推断lambda的返回类型
	//// 这里当然可以推断...
	//std::transform(vi.begin(), vi.end(), vi.begin(),
	//	[](int i) {if (i < 0) return -i; else return i; });

	//std::transform(vi.begin(), vi.end(), vi.begin(),
	//	[](int i)->int
	//{if (i < 0) return -i; else return i; });

	// check6是一个可调用对象，接受一个string类型的参数
	// 并用此string和值6来调用check_size
	//auto check6 = bind(check_size, std::placeholders::_1, 6);
	//string s = "hello";
	//bool b1 = check6(s); // check6(s)会调用check_szie(s, 6);

	//vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	//biggies(words, 5);

	//// 按单词长度由短至长排序
	//sort(words.begin(), words.end(), isShorter);
	//// 按单词长度由长至短排序
	//sort(words.begin(), words.end(), bind(isShorter, _2, _1));

	//auto &os = cout;
	//char c;
	//// os是一个局部变量，引用一个输出流
	//// c是一个局部变量，类型为char
	//std::for_each(words.begin(), words.end(),
	//	[&os, c](const string &s) {os << s << c; });

	// 错误：不能拷贝os
	//for_each(words.begin(), words.end(), bind(print, os, _1, ' '));
	//for_each(words.begin(), words.end(), bind(print, std::ref(os), _1, ' '));

	//auto check6 = bind2nd(ptr_fun(check_size), 6); // 这里check_size接收的第一个参数不能是引用类型...
	//cout << check6("aaaaaaaaaaaaaaa");
}

// 10.4 再探迭代器
void ex04()
{
	//list<int> lst = { 1,2,3,4 };
	//list<int> lst2, lst3; //{ 1 }; // 空list
	//// 拷贝完成之后，lst2包含4 3 2 1
	//std::copy(lst.cbegin(), lst.cend(), std::front_inserter(lst2));
	//// 拷贝完成之后，lst3包含1 2 3 4
	//*auto beg = lst3.begin();
	//lst3.erase(beg);*/
	//std::copy(lst.cbegin(), lst.cend(), inserter(lst3, beg));

	//istream_iterator<int> int_it(cin); // 从cin读取int
	//istream_iterator<int> int_eof; // istream尾后迭代器
	//ifstream in("afile");
	//istream_iterator<string> str_int(in); // 从"afile"读取字符串

	//vector<int> vec;
	//char a;
	//cin >> a;
	//istream_iterator<int> in_iter(cin); // 从cin读取int
	//istream_iterator<int> eof; // istream尾后迭代器
	//while (in_iter != eof)
	//	// 后置递增运算符读取流，返回迭代器的旧值
	//	// 解引用迭代器，获得从流读取的前一个值
	//	vec.push_back(*in_iter++);

	//istream_iterator<int> in_iter(cin), eof; // 从cin读取int
	//vector<int> vec(in_iter, eof); // 从迭代器范围构造vec

	/*istream_iterator<int> in(cin), eof;
	cout << std::accumulate(in, eof, 0) << endl;*/

	//vector<int> vec{ 1,2,3,4,5 };
	//ostream_iterator<int> out_iter(cout, " ");
	//for (auto e : vec)
	//	out_iter = e; // 赋值语句实际上就是将元素写到cout
	//cout << endl;
	//copy(vec.begin(), vec.end(), out_iter);
	//cout << endl;

	//istream_iterator<Sales_item> item_iter(cin), eof;
	//ostream_iterator<Sales_item> out_iter(cout, "\n");
	//// 将第一笔交易记录存在sum中，并读取下一条记录
	//Sales_item sum = *item_iter++;
	//while (item_iter != eof) {
	//	// 如果当前交易记录(存在item_iter中)有着相同的ISBN号
	//	if (item_iter->isbn() == sum.isbn())
	//		sum += *item_iter++; // 将其加到sum上并读取下一条记录
	//	else {
	//		out_iter = sum;	// 输出sum当前值
	//		sum = *item_iter++; // 读取下一条记录
	//	}
	//}
	//out_iter = sum; // 打印最后一组记录的和

	/* 10.43 反向迭代器 */
	//vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//sort(vec.begin(), vec.end());	// 按"正常序"排序vec
	//// 按逆序排序：将最小元素放在vec的末尾
	//sort(vec.rbegin(), vec.rend());

	//// 从尾元素到首元素的反向迭代器
	//for (auto r_iter = vec.crbegin();	// 将r_iter绑定到尾元素
	//	r_iter != vec.crend();			// crend只想首元素之前的位置
	//	++r_iter)						// 实际是递减，移动到前一个元素
	//	cout << *r_iter << endl;		// 打印 9, 8, 7, ... 0

	string line("apple,about,at,add,an,app");
	// 在一个逗号分割的列表中查找第一个元素
	string::const_iterator comma = find(line.cbegin(), line.cend(), ',');
	cout << string(line.cbegin(), comma) << endl;
	// 在一个都好分割的列表中查找最后一个元素
	string::const_reverse_iterator rcomma = find(line.crbegin(), line.crend(), ',');
	string::const_reverse_iterator rcomma1 = find(rcomma, line.crend(), ',');
	// 错误：将逆序输出单词的字符
	cout << string(line.crbegin(), rcomma) << endl;
	// 正确：得到一个正向迭代器，从逗号开始读取字符知道line末尾
	cout << string(rcomma.base(), line.cend()) << endl;
}

// 10.5 泛型算法结构
void ex05()
{

}

// 10.6 特定容器算法
void ex06()
{
	std::list<int> lst{ 1, 2, 3, 4, 5, 6 };
	std::list<int> lst2{ 7, 8, 9, 10, 11, 12 };
	std::forward_list<int> flst{ 1, 2, 3, 4, 5, 6 };
	std::forward_list<int> flst2{ 7, 8, 9, 10, 11, 12 };

	//lst.splice(lst.begin(), lst2);
	//flst.splice_after(flst.begin(), flst2);
	/*lst.splice(lst.begin(), lst2, lst2.begin());
	flst.splice_after(flst.begin(), flst2, flst2.begin()++);*/
	lst.splice(lst.begin(), lst2, lst2.begin(), lst2.end());
	flst.splice_after(flst.begin(), flst2, flst2.begin(), flst2.end());

	for each (int var in lst)
	{
		cout << var << endl;
	}
	cout << "-----------------------------------------" << endl;
	for each (int var in flst)
	{
		cout << var << endl;
	}
}

int main1()
{
	//ex01();
	//ex02();
	//ex03();
	//ex04();
	//ex05();
	ex06();


	system("pause");
	return 0;
}