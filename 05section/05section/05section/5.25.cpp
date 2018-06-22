#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
#include "Sales_item.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;

int main()
{
	int num1, num2;
	while (cin >> num1 >> num2) {
		try {
			if (num2 == 0)
				throw runtime_error("零不能做除数");
			cout << num1*1.0 / num2 << endl;
		}
		catch (runtime_error err) {
			cout << err.what()
				<< "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;// 跳出while循环
		}
	}
	system("pause");
	return 0;
}