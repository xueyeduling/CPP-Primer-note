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
	// 因为前置运算符不需要存储变量的副本，执行效率高
	// 下面是用后置运算符的版本
	vector<int> ivec = { 1,2,3,4,5 };
	vector<int>::size_type cnt = ivec.size();
	// 将把从size到1的值赋给ivec的元素
	for (vector<int>::size_type ix = 0; ix != ivec.size();)
		ivec[ix++] = cnt--;
	for (size_t i = 0; i < ivec.size(); i++)
	{
		cout << ivec[i] << endl;
	}

	system("pause");
	return 0;
}