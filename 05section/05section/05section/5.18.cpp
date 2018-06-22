#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//a. 循环读取，并输出和
	// do while的循环体只能是一条语句，应该用{}括起来
	/*do {
		int v1, v2;
		cout << "Please enter two numbers to sum:";
		if (cin >> v1 >> v2)
			cout << "Sum is : " << v1 + v2 << endl;
	} while (cin);*/

	//b. do while条件部分不能定义变量
	//   定义在循环体内条件部分也不能访问，所以应该定义在do-while外部
	//int ival;
	//do {
	//	// ...
	//} while (ival = 1);

	//c. 变量定义在循环体内条件部分不能访问，所以应该定义在do-while外部
	/*int ival;
	do {
		ival = get_response();
	} while (ival);*/


	system("pause");
	return 0;
}