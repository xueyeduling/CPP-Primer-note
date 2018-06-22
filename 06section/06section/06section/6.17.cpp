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
bool IsHavaUpper(const string &s)
{
	auto it = s.begin();
	while (it != s.end())
	{
		if (isupper(*it++))
			return true;
	}
	return false;
}
void ToLower(string &s)
{
	auto it = s.begin();
	while (it != s.end())
	{
		*it = tolower(*it);
		++it;
	}
}
int main()
{
	string s = "AbdD";
	ToLower(s);
	cout << s << endl;
	system("pause");
	return 0;
}