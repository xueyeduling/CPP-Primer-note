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
int main(int argc, char *argv[])
{
	cout << "argc: " << argc << endl;
	for (size_t i=1;i!=argc;++i)
		cout << "argv[" << i << "]: " << argv[i] << endl;

	system("pause");
	return 0;
}