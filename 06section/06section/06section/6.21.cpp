#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
int compare(const int, const int *);
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	
	cout << compare(num1, &num2) << endl;

	system("pause");
	return 0;
}
int compare(const int i, const int *p) {
	return i > *p ? i : *p;
}