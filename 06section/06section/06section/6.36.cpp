#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <exception>
#include <stdexcept>
#include <cstddef>
#include <cstring>
#include <cctype>
#include <initializer_list>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::endl;
using std::runtime_error;
using std::exception;
using std::initializer_list;

string(&func())[10]
{
	static string strs[10];
	int i = 0;
	for (auto &str : strs)
	{
		str = "haha";
		str += (i++ + '0');
	}
	return strs;
}

int main()
{
	string(&strs)[10] = func();
	for (auto str : strs)
		cout << str << endl;
	system("pause");
	return 0;
}