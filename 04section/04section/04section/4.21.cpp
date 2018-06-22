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
	vector<int> ivec{ 1,2,3,4,5,6,7,8 };
	for (int i : ivec)
	{
		i = i % 2 != 0 ? i * 2 : i;
		cout << i << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}