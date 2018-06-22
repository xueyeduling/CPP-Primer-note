#define _CRT_SECURE_NO_WARNINGS
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

// a.Book		b.Date		c.Employee
// d.Vehicle	e.Object	f.Three

class Book
{
public:
	Book() :Book("", "", "", 0.0) {};
	Book(const string &name) :Book(name, "", "", 0.0) {}
	Book(const string name, const string isbn) :
		Book(name, isbn, "", 0.0) {}
	Book(const string name, const string isbn, const string author) :
		Book(name, isbn, author, 0.0) {}
	Book(const string name, const string isbn, const string author, double price) :
		name(name), isbn(isbn), author(author), price(price) {}

private:
	string name;
	string isbn;
	string author;
	double price = 0.0;
};

int main()
{
	const string name = "hewei";
	Book book(name);

	system("pause");
	return 0;
}