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
#include <cstdarg>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
int sum(initializer_list<int> list)
{
	int sum = 0;
	for (int tmp : list)
		sum += tmp;
	return sum;
}
int main()
{
	int num;
	int num1;
	int num2;
	cin >> num >> num1 >> num2;
	cout << sum({ num ,num1,num2 }) << endl;
	system("pause");
	return 0;
}