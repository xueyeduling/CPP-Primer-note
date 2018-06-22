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
using std::to_string;

typedef string::size_type sz;

void ex1()
{
	//const char *cp = "Hello World!!!"; // 以空字符结束的数组
	//char noNull[] = { 'H','i' }; // 不是以空字符结束
	//string s1(cp); // 拷贝cp中的字符知道遇到空字符; s1 == "Hello World!!!"
	//string s2(noNull, 2); // 从noNull拷贝两个字符；s2 == "Hi"
	//string s3(noNull); // 未定义：noNull不是以空字符结束
	//string s4(cp + 6, 5); // 从cp[6]开始拷贝5个字符；s4 == "World"
	//string s5(s1, 6, 5); // 从s1[6]开始拷贝5个字符；s5 == "World"
	//string s6(s1, 6); // 从s1[6]开始拷贝，直至s1末尾；s6 == "World!!!"
	//string s7(s1, 6, 20); // 正确，只拷贝到s1末尾；s7 == "World!!!"
	//string s8(s1, 16); // 抛出一个out_of_range异常


	string s("hello world");
	string s2 = s.substr(0, 5);	// s2 = hello
	string s3 = s.substr(6);	// s3 = world
	string s4 = s.substr(6, 11);// s3 = world
	string s5 = s.substr(12);	// 抛出一个out_of_range异常
}

void ex2()
{
	//list<string> names;
	//vector<const char*> oldstyle{ "abc","bcd","cde" };
	////names = oldstyle;	// 错误：容器类型不匹配
	//// 正确：可以将const char*转换为string
	//names.assign(oldstyle.cbegin(), oldstyle.cend());
	//int i = 10;
	//cout << i << endl;

	//string s = "abc";
	//s.insert(s.size(), 5, '!'); // 在s末尾插入5个感叹符
	//s.erase(s.size() - 5, 5); // 从s删除最后5个字符
	//cout << s << endl;

	//const char *cp = "Stately, plump Buck";
	//s.assign(cp, 7); // s == "Stately"
	//s.insert(s.size(), cp + 7); // s == "Stately, plump Buck"
	//cout << s << endl;

	//string s = "some string", s2 = "some other string";
	//s.insert(0, s2);	// 在s中位置0之前插入s2的拷贝
	//// 在s[0]之前插入s2中s2[0]开始的s2.size()个字符
	//s.insert(0, s2, 0, s2.size());
	//cout << s << endl;

	string s("C++ Primer"), s2 = s;	// 将s和s2初始化为"C++ Primer"
	s.insert(s.size(), " 4th Ed.");	// s == "C++ Primer 4th Ed."
	s2.append(" 4th Ed."); // 等价方法：将" 4th Ed."追加到s2; s == s2
	cout << s << endl << s2 << endl;

	// 将"4th"替换为"5th"的等价方法
	s.erase(11, 3); // s == "C++ Primer Ed."
	s.insert(11, "5th"); // s == "C++ Primer 5th Ed."
	// 从位置11开始，删除3个字符并插入"5th"
	s2.replace(11, 3, "5th"); // 等价方法：s == s2
	cout << (s == s2) << endl;

	s.replace(11, 3, "Fifth"); // s == "C++ Primer Fifth Ed."
	cout << s << endl;
}

void ex3()
{
	//string name("AnnaBelle");
	//auto pos1 = name.find("Anna"); // pos1 == 0

	//string lowercase("annabelle");
	//pos1 = lowercase.find("Anna"); // pos1 == npos

	string numbers("0123456789"), name("r2d2");
	//// 返回1，即，name中第一个数字下标
	//auto pos = name2.find_first_of(numbers);

	//string dept("03714p3");
	//// 返回 5——字符'p'的下标
	//auto pos2 = dept.find_first_not_of(numbers);

	//string::size_type pos = 0;
	//// 每步循环查找name中下一个数
	//while ((pos = name.find_first_of(numbers, pos))
	//	!= string::npos) {
	//	cout << "found number at index: " << pos
	//		<< " element is " << name[pos] << endl;
	//	++pos; // 移动到下一个字符
	//}

	string river("Mississippi");
	auto first_pos = river.find("is"); // 返回1
	auto last_pos = river.rfind("is"); // 返回4

	cout << first_pos << endl << last_pos << endl;
}

// 9.5.5 数值转换
void ex05()
{
	int i = 42;
	string s = std::to_string(i);	// 将整形i转换为字符表示形式
	double d = stod(s);				// 将字符串s转换为浮点数

	string s2 = "pi = 3.14";
	// 转换s中以数字开始的一个子串，结果d = 3.14
	d = stod(s2.substr(s2.find_first_of("+-.0123456789")));

	cout << d << endl;
}

int main()
{
	//ex1();
	//ex2();
	//ex3();
	ex05();

	system("pause");
	return 0;
}