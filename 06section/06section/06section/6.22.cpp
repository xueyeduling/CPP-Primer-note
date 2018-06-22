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
void swop(int **p1, int **p2)
{
	int *tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main()
{
	int num1, num2;
	int *p1 = &num1, *p2 = &num2;
	cin >> num1 >> num2;
	swop(&p1, &p2);
	cout << *p1 << ' ' << *p2 << endl;

	system("pause");
	return 0;
}