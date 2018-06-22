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
	vector<int> ivec1 = { 1,2,3,4,6 };
	vector<int> ivec2 = { 1,2,3,4,6,7,8,9 };
	int flag = 1;
	size_t size = ivec1.size() > ivec2.size() ? ivec2.size() : ivec1.size();
	for (size_t i = 0; i != size; ++i)
	{
		if (ivec1[i] != ivec2[i]) {
			flag = 0;
			break;
		}
	}
	cout << (flag ? "ivec1和ivec2一样啊..." : "不一样...") << endl;
	system("pause");
	return 0;
}