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

// 使用引用方便啊，不用取地址&，也不用解引用*
void swop(int &val1p, int &val2p)
{
	val1p += val2p;
	val2p = val1p - val2p;
	val1p -= val2p;
}
int main()
{
	int val1, val2;
	cin >> val1 >> val2;
	swop(val1, val2);
	cout << val1 << ' ' << val2 << endl;
	system("pause");
	return 0;
}