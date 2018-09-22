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
using std::hash;

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

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;      // 保存转换规则
    string key;                         // 要转换的单词
    string value;                       // 替换后的内容
    // 读取第一个单词存入key中，行中剩余内容存入value
    while (map_file >> key && getline(map_file, value))
    if (value.size() > 1) // 检查是否有转换规则
        //trans_map[key] = value.substr(1);   // 跳过前导空格
        trans_map.insert({ key, value.substr(1) });
    else
        throw runtime_error("no rule for " + key);

    return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
    // 实际的转换工作：此部分是程序的核心
    auto map_it = m.find(s);
    // 如果单词在转换规则map中
    if (map_it != m.cend())
        return map_it->second;  // 使用替换短语
    else
        return s;               // 否则返回原string
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);    // 保存转换规则
    string text;                            // 保存输入中的每一行
    while (getline(input, text)){           // 读取一行输入
        istringstream stream(text);         // 读取每个单词
        string word;
        bool firstword = true;              // 控制是否打印空格
        while (stream >> word){
            if (firstword)
                firstword = false;
            else
                cout << " ";                // 在单词间打印一个空格
            // transform返回它的第一个参数或其转换之后的形式
            cout << transform(word, trans_map); // 打印输出
        }
        cout << endl;                       // 完成一行的转换
    }
}

void ex03()
{
    /*set<string>::value_type v1;         // v1是一个string
    set<string>::key_type v2;           // v2是一个string
    map<string, int>::value_type v3;    // v3是一个pair<const string, int>
    map<string, int>::key_type v4;      // v4是一个string
    map<string, int>::mapped_type v5;   // v5是一个int
    */

    /*map<string, size_t> word_count;
    // 获得指向word_count中一个元素的迭代器
    auto map_it = word_count.begin();
    // *map_it是指向一个pair<const string, size_t>对象的引用
    cout << map_it->first;              // 打印此元素的关键字
    cout << " " << map_it->second;      // 打印此元素的值
    //map_it->first = "new key";          // 错误：关键字是const的
    ++map_it->second;                   // 正确：我们可以通过迭代器改变元素
    */

    /*set<int> iset = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    set<int>::iterator set_it = iset.begin();
    if (set_it != iset.end()){
    //*set_it = 42;               // 错误：set中的关键字是只读的
    cout << *set_it << endl;    // 正确：可以读关键字
    }*/

    /*map<string, size_t> word_count;
    // 获得一个指向首元素的迭代器
    auto map_it = word_count.cbegin();
    // 比较当前迭代器和尾后迭代器
    while (map_it != word_count.cend()){
    // 解引用迭代器，打印关键字-值对
    cout << map_it->first << " occurs "
    << map_it->second << " times" << endl;
    ++map_it;       // 递增迭代器，移动到下一个元素
    }*/

    /*vector<int> ivec = { 2, 4, 6, 8, 2, 4, 6, 8 };      // ivec有8个元素
    set<int> set2;                                      // 空集合
    set2.insert(ivec.begin(), ivec.end());              // set2有4个元素
    set2.insert({ 1, 3, 5, 7, 1, 3, 5, 7 });            // set2有8个元素*/

    /*map<string, size_t> word_count;
    string word;
    // 向word_count插入word的4种方法
    word_count.insert({ word, 1 });
    word_count.insert(make_pair(word, 1));
    word_count.insert(pair<string, size_t>(word, 1));
    word_count.insert(map<string, size_t>::value_type(word, 1));*/

    /*// 统计每个单词在输入种出现次数的一种更繁琐的方法
    map<string, size_t> word_count; // 从string到size_t的空map
    string word;
    while (cin >> word)
    {
    // 插入一个元素没关键字等于word，值为1;
    // 若word已在word_count中，insert什么也不做
    auto ret = word_count.insert({ word, 1 });
    if (!ret.second)            // word已在word_count中
    ++ret.first->second;    // 递增计数器
    }*/

    /*multimap<string, string> authors;
    // 插入第一个元素，关键字为Barth，John
    authors.insert({ "Barth, John", "Sot-Weed Factor" });
    // 正确：添加第二个元素，关键字也是Barth，John
    authors.insert({ "Barth, John", "Lost in the Funhouse" });*/

    /*map<string, size_t> word_count;
    string removal_word;
    // 删除一个关键字，返回删除的元素数量
    if (word_count.erase(removal_word))
    cout << "ok: " << removal_word << " removed\n";
    else
    cout << "oops: " << removal_word << " not found!\n";*/

    /*map<string, size_t> word_count; // empty map
    // 插入一个关键字为Anna的元素，关联值进行值初始化；然后将1赋予它
    word_count["Anna"] = 1;

    cout << word_count["Anna"]; // 用Anna作为下标提取元素；会打印出1
    ++word_count["Anna"]; // 提取元素，将其增1
    cout << word_count["Anna"]; // 提取元素并打印它；会打印出2*/

    /*set<int> iset = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    iset.find(1);   // 返回一个迭代器，指向key == 1的元素
    iset.find(11);  // 返回一个迭代器，其值等于iset.end();
    iset.count(1);  // 返回1
    iset.count(11); // 返回0*/

    /*map<string, size_t> word_count;
    if (word_count.find("foobar") == word_count.end())
    cout << "foobar is not in the map" << endl;*/

    /*multimap<string, string> authors;
    string search_item("Alain de Botton");      // 要查找的作者
    auto entries = authors.count(search_item);  // 元素的数量
    auto iter = authors.find(search_item);      // 此作者的第一本书
    // 用一个循环查找此作者的所有著作
    while (entries) {
    cout << iter->second << endl;           // 打印每个题目
    ++iter;                                 // 前进到下一本书
    --entries;                              // 记录已经打印了多少本书
    }*/

    /*multimap<string, string> authors;
    string search_item("Alain de Botton");
    // authors和search_item的定义，与前面的程序一样
    // beg和end表示对应此作者的元素的范围
    for (auto beg = authors.lower_bound(search_item), end = authors.upper_bound(search_item);
    beg != end; ++beg)
    {
    cout << beg->second << endl;    // 打印每个题目
    }

    // authors和search_item的定义，与前面的程序一样
    // beg和end表示对应此作者的元素的范围
    for (auto pos = authors.equal_range(search_item); pos.first != pos.second;
    ++pos.first)
    {
    cout << pos.first->second << endl;    // 打印每个题目
    }*/

    /*ifstream map_file;
    ifstream input;
    map_file.open("map_file.txt");
    input.open("input.txt");
    word_transform(map_file, input);*/

}

size_t hasher(const Sales_data &sd)
{
    return hash<string>()(sd.isbn());
}

bool eqOp(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() == rhs.isbn();
}

void ex04()
{
    /*
    // 统计出现次数，但单词不会按字典序排列
    unordered_map<string, size_t> word_count;
    string word;
    while (cin >> word)
        ++word_count[word];     // 提取并递增word的计数器
    for (const auto &w : word_count)    // 对map中的每个元素
        // 打印结果
        cout << w.first << " occurs " << w.second << (w.second > 1 ? " times" : " time") << endl;
    */

    using SD_multiset = unordered_multiset<Sales_data,
        decltype(hasher)*, decltype(eqOp)*>;
    // 参数是桶大小、哈希函数指针和相等性判断运算符指针
    SD_multiset bookstore(42, hasher, eqOp);

    // 使用FooHash生成哈希值; Foo必须有==运算符
    //unordered_set<Foo, decltype(FooHash)*> fooSet(10, FooHash);
}

int main1()
{
    //ex01();
    //ex02();
    ex03();

    system("pause");
    return 0;
}