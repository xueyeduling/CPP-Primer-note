#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int get_size();
int main()
{
	srand((unsigned int)time(NULL));
	//begin:
	//	int sz = get_size();
	//	if (sz <= 0) {
	//		goto begin;
	//	}
	int sz;
	while ((sz = get_size()) < 0)
		cout << sz << '\t';
	cout << sz << endl;
	system("pause");
	return 0;
}
int get_size()
{
	return rand() % 5 == 0 ? 1 : -1;;
}