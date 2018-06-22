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
	int ia[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,8,7,6}
	};
#pragma region 范围for
	for (int(&p)[4] : ia) {
		for (int q : p)
			cout << q << ' ';
		cout << endl;
	}
#pragma endregion

#pragma region 下标
	for (size_t i = 0; i != end(ia) - begin(ia); i++)
	{
		for (size_t j = 0; j < end(ia[i]) - begin(ia[i]); j++)
			cout << ia[i][j] << ' ';
		cout << endl;
	}
#pragma endregion

#pragma region 指针
	for (int(*p)[4] = ia; p != ia + 3; p++)
	{
		for (int *q = *p; q != *p + 4; q++)
			cout << *q << ' ';
		cout << endl;
	}
#pragma endregion


	system("pause");
	return 0;
}