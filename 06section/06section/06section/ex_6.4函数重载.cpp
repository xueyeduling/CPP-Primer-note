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

const int * func(const int* val)
{
	cout << *val << endl;
	return val;
}

#define NDEBUG

//void func(int *val)
//{
//	cout << *val + 10 << endl;
//}

//inline const string &shorterString(const string &s1, const string &s2)
//{
//	return s1.size() <= s2.size() ? s1 : s2;
//}

//string &shorterString(string &s1, string &s2)
//{
//	return s1.size() <= s2.size() ? s1 : s2;
//}

//string &shorterString(string &s1, string &s2)
//{
//	auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
//	return const_cast<string&>(r);
//}

//string read();
//void print(const string &);
//void print(double); // 重载print函数
//void fooBar(int ival)
//{
//	bool read = false; // 隐藏了外层的read
//	string s = read(); // 错误：read是一个布尔值，而非函数
//	// 不好的习惯：通常来说，在局部作用域中声明函数不是一个好的选择
//	void print(int); // 隐藏了外层声明的两个print
//	print("Vlaue: "); // 错误，print(const string &)被隐藏了
//	print(ival); // 正确：当前print(int)可见
//	print(3.14);// 正确：调用print(int); print(double)被隐藏了
//}

//void print(const string &);
//void print(double);
//void print(int);
//void fooBar2(int ival)
//{
//	print("Value: ");
//	print(ival);
//	print(3.14);
//}

typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');

constexpr int new_sz() {
	return 42;
}

constexpr int foo = new_sz();

constexpr size_t scale(size_t cnt) {
	/*int i = 10;
	printf("%d\n", i);*/
	return new_sz()*cnt;
}

void print(const int ia[], size_t size)
{
#ifndef NDEBUG
	// --func-- 是编译器定义的一个局部静态变量，用于存放函数的名字
	cerr << __func__ << ": array size is " << size << endl;
#endif
	//...
}


void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{
	/*int b[2][3][4];
	int(*p)[3][4] = b;
	cout << sizeof(b[0]) << endl;*/

	//f(5.6); // 调用void f(double, double)

	/*int i = 20;
	func(&i);*/

	/*string s1 = "hahaha";
	string s2 = "xixi";
	shorterString(s1, s2) = "gege";
	cout << s2 << endl;*/

	/*int arr1[scale(2)];
	int i = 2;
	int j = scale(i);*/
	//int arr2[scale(i)];

#pragma region MyRegion
			/*assert(5 < 4);*/
//string word = "haha";
//size_t threshold = 10;
//if (word.size() < threshold)
//{
//	cerr << "Error: " << __FILE__
//		<< " : in function " << __func__
//		<< " at line " << __LINE__ << endl
//		<< "		Compiled on " << __DATE__
//		<< " at " << __TIME__ << endl
//		<< "	Word read was \"" << word
//		<< "\": Length too short " << endl;
//}  
#pragma endregion


	system("pause");
	return 0;
}