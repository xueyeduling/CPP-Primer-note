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

double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
int main()
{
	// a. 实参的数量多了...
	//calc(23.4, 55.1);
	//calc(23.4);

	// b. 正确
	//count("abcda", 'a');

	// c.
	//calc(66);

	// d.
	//sum(vec.begin(), vec.end(), 3.8);

	system("pause");
	return 0;
}

int sum(vector<int>::iterator beg, vector<int>::iterator end, int i)
{
	return 10;
}

double calc(double d)
{
	return d;
}

int count(const string &s, char c)
{
	int cnt = 0;
	for (size_t i = 0; i != s.size(); i++)
	{
		if (s[i] == c)
			++cnt;
	}
	return cnt;
}