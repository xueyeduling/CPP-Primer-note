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

//s为引用类型可以不用拷贝，从而s很大的时候可以提高效率
//声明为const是因为不需要改变s的值
//c很小，也不需要改变实参的值，所以不必是引用类型
// occurs因为要改变实参的值，所以要是普通引用类型

//s是普通引用，也不会发生什么...
//occurs是常量引用会造成值无法修改，编译出错
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // 第一次出现的为止(如果有的话)
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // 记录c第一次出现的位置
			++occurs; // 将出现的次数加1
		}
	}
	return ret; // 出现次数通过occurs隐式地返回
}

int main()
{

	system("pause");
	return 0;
}