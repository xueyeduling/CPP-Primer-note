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

class Account {
public:
	void calculate() { amount += amount*interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate()
	{
		return 1.1;
	}
};

// 定义并初始化一个静态成员
double Account::interestRate = initRate();

//double Account::initRate()
//{
//	return 1.1;
//}

void Account::rate(double newRate)
{
	interestRate = newRate;
}

class Account2
{
public:
	static double rate() { return interestRate; }
	static void rate(double);
public:
	static double interestRate;
	static constexpr int period = 30;	// period是常量表达式
	double daily_tbl[period];
};

// 一个不带初始值的静态成员定义
constexpr int Account2::period;			// 初始值在类的定义内提供了

void test(const int &i)
{
	cout << i << endl;
}

class Person
{
public:
	Person() = default;
	Person(string name, int age) :name(name), age(age) {}

private:
	string name;
	int age;
};

class Bar
{
public:
	// ...
private:
	static Bar mem1;	// 正确：静态成员可以是不完全类型
	Bar *mem2;			// 正确：指针成员可以是不完全类型
	// Bar mem3;		// 错误：数据成员必须是完全类型
};

class Screen
{
public:
	// bkground表示一个在类中稍后定义的静态成员
	Screen& clear(char = bkground);
private:
	static const char bkground;
};

int main()
{
	//double r;
	//r = Account::rate();	// 使用作用域运算符访问静态成员

	//Account ac1;
	//Account *ac2 = &ac1;
	//// 调用静态成员函数rate的等价形式
	//r = ac1.rate();			// 通过Account的对象或引用
	//r = ac2->rate();		// 通过指向Account对象的指针

	//Account2 a3;
	////a3.rate(3);
	//test(a3.period);

	Person p;

	system("pause");
	return 0;
}