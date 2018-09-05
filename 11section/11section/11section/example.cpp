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
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
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
using std::map;
using std::set;
using std::multimap;
using std::multiset;
using std::unordered_map;
using std::unordered_set;
using std::unordered_multimap;
using std::unordered_multiset;

typedef string::size_type sz;

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

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

// 11.1
void ex01()
{
    //// 统计每个单词在输入中出现的次数
    //map<string, size_t> word_count;     // 从string到size_t的空map
    //string word;
    //while (cin >> word)
    //    ++word_count[word];                 // 提取word的计数器并将其加1
    //for (const auto &w : word_count)    // 对map中的每个元素
    //    // 打印结果
    //    cout << w.first << " occurs " << w.second
    //    << ((w.second > 1) ? " times" : " times") << endl;

    // 统计每个单词在输入中出现的次数
    map<string, size_t> word_count;     // 从string到size_t的空map
    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    string word;
    while (cin >> word)
        // 只统计不再exclude中的单词
        if (exclude.find(word) == exclude.end())
            ++word_count[word];         // 提取word的计数器并将其加1
    for (const auto &w : word_count)    // 对map中的每个元素
        // 打印结果
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << endl;
}

// 11.2
void ex02()
{
    /*map<string, size_t> word_count;     // 空容器
    // 列表初始化
    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    // 三个元素；authors将姓映射为名
    map<string, string> author = { { "Joyce", "James" },
    { "Austen", "Jane" },
    { "Dickens", "Charles" } };
    */

    /*// 定义一个有20个元素的vector，保存0到9每个整数的两个拷贝
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i){
        ivec.push_back(i);
        ivec.push_back(i); // 每个数重复保存一次
    }
    // iset包含来自ivec的不重复的元素；miset包含所有20个元素
    set<int> iset(ivec.cbegin(), ivec.cend());
    multiset<int> miset(ivec.cbegin(), ivec.cend());
    cout << ivec.size() << endl;        // 打印出20
    cout << iset.size() << endl;        // 打印出10
    cout << miset.size() << endl;       // 打印出20
	*/

    // bookstore中多条记录可以有相同的ISBN
    // bookstore中的元素以ISBN的顺序进行排序
    multiset<Sales_data, decltype(compareIsbn) *>
        bookstore(compareIsbn);
}

int main1()
{
    //ex01();
    ex02();

    system("pause");
    return 0;
}