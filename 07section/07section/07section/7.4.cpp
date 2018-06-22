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

// 返回姓名和地址的函数应该是const
// 因为这些函数不会修改对象的值，同时又需要const对象及其引用指针能够调用

typedef struct Person {
	string firstName;
	string lastName;
	string address;

	string FName() const {
		return firstName;
	}
	string LName() const;
	string Add() const;
} Person;

string Person::Add() const {
	return address;
}

string Person::LName() const {
	return lastName;
}

istream &read(istream &istr, Person &per) {
	istr >> per.firstName >> per.lastName >> per.address;
	return istr;
}

ostream &print(ostream &ostr, Person &per)
{
	ostr << per.FName() << " " << per.LName() << " " << per.Add();
	return ostr;
}

int main()
{
	Person per;
	read(cin, per);
	print(cout, per);
	cout << endl;
	system("pause");
	return 0;
}