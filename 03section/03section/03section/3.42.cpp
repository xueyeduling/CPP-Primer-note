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
	vector<int> ivec{1,2,3,4,5,6,7,8,9,0};
	int arr[10];
	for (int i=0;i<ivec.size();++i)
	{
		arr[i] = *(ivec.begin() + i);
	}
	for (int i : arr)
		cout << i << endl;
	system("pause");
	return 0;
}