#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
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
	// �����Ĺ��캯��
	Sales_data() = default;
	Sales_data(const std::string &s) :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &);
	// �³�Ա������Sales_data����Ĳ���
	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	// ���ݳ�Ա��2.6.1��(64ҳ)���û�иı�
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
// Sales_data�ķǳ�Ա�ӿں���
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
	units_sold += rhs.units_sold; // ��rhs�ĳ�Ա�ӵ�this����ĳ�Ա��
	revenue += rhs.revenue;
	return *this; // ���ص��øú����Ķ���
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
	Sales_data sum = lhs; // ��lhs�����ݳ�Ա������sum
	sum.combine(rhs); // ��rhs�����ݳ�Ա�ӵ�sum����
	return sum;
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this); // read�����������Ǵ�is�ж�ȡһ��������ϢȻ�����this������
}

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
	return lhs.isbn() < rhs.isbn();
}

// 11.1
void ex01()
{
    //// ͳ��ÿ�������������г��ֵĴ���
    //map<string, size_t> word_count;     // ��string��size_t�Ŀ�map
    //string word;
    //while (cin >> word)
    //    ++word_count[word];                 // ��ȡword�ļ������������1
    //for (const auto &w : word_count)    // ��map�е�ÿ��Ԫ��
    //    // ��ӡ���
    //    cout << w.first << " occurs " << w.second
    //    << ((w.second > 1) ? " times" : " times") << endl;

    // ͳ��ÿ�������������г��ֵĴ���
    map<string, size_t> word_count;     // ��string��size_t�Ŀ�map
    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    string word;
    while (cin >> word)
        // ֻͳ�Ʋ���exclude�еĵ���
        if (exclude.find(word) == exclude.end())
            ++word_count[word];         // ��ȡword�ļ������������1
    for (const auto &w : word_count)    // ��map�е�ÿ��Ԫ��
        // ��ӡ���
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << endl;
}

// 11.2
void ex02()
{
    /*map<string, size_t> word_count;     // ������
    // �б���ʼ��
    set<string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    // ����Ԫ�أ�authors����ӳ��Ϊ��
    map<string, string> author = { { "Joyce", "James" },
    { "Austen", "Jane" },
    { "Dickens", "Charles" } };
    */

    /*// ����һ����20��Ԫ�ص�vector������0��9ÿ����������������
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 10; ++i){
        ivec.push_back(i);
        ivec.push_back(i); // ÿ�����ظ�����һ��
    }
    // iset��������ivec�Ĳ��ظ���Ԫ�أ�miset��������20��Ԫ��
    set<int> iset(ivec.cbegin(), ivec.cend());
    multiset<int> miset(ivec.cbegin(), ivec.cend());
    cout << ivec.size() << endl;        // ��ӡ��20
    cout << iset.size() << endl;        // ��ӡ��10
    cout << miset.size() << endl;       // ��ӡ��20
	*/

    // bookstore�ж�����¼��������ͬ��ISBN
    // bookstore�е�Ԫ����ISBN��˳���������
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