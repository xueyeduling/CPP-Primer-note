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
	//        q:							01110001
	// (int)'q': 00000000 00000000 00000000 01110001
	//     ~'q': 11111111 11111111 11111111 10001110
	unsigned int i = ~0b01110001;
	cout << i << endl;//‭4294967182‬
	system("pause");
	return 0;
}