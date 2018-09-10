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
#include <utility>
#include "Sales_data.h"
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
using std::pair;

typedef string::size_type sz;

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

pair<string, int>
process(vector<string> &v)
{
    // 处理v
    if (!v.empty())
        return{ v.back(), v.back().size() };    // 列表初始化
    /*if (!v.empty())
        return pair<string, int>(v.back(), v.back().size());*/
    /*if (!v.empty())
        return make_pair(v.back(), v.back().size());*/
    else
        return pair<string, int>();             // 隐式构造返回值
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
    /*multiset<Sales_data, decltype(compareIsbn) *>
        bookstore(compareIsbn);*/

    pair<string, string> anon;      // 保存两个string
    pair<string, size_t> word_count;    // 保存一个string和一个size_t
    pair<string, vector<int>> line;     // 保存string和vector<int>
    // 可以为每个成员提供值初始化器
    pair<string, string> author{ "James", "Joyce" };
}

void ex03()
{
    set<string>::value_type v1;         // v1是一个string
    set<string>::key_type v2;           // v2是一个string
    map<string, int>::value_type v3;    // v3是一个pair<const string, int>
    map<string, int>::key_type v4;      // v4是一个string
    map<string, int>::mapped_type v5;   // v5是一个int
}

int main1()
{
    //ex01();
    ex02();

    system("pause");
    return 0;
}