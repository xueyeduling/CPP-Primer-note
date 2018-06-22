#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void bigies(vector<string> &words,
	vector<string>::size_type sz)
{
	[](vector<string> &words)
	{
		sort(words.begin(), words.end());
		// unique重排输入范围，使得每个单词只出现一次
		// 排序在范围的前部，返回指向不重复区域之后一个位置的迭代器
		vector<string>::iterator end_unique = std::unique(words.begin(), words.end());
		// 使用向量操作erase删除重复单词
		words.erase(end_unique, words.end());
	}(words);
	auto wc = std::partition(words.begin(), words.end(), std::bind(check_size, std::placeholders::_1, sz));
	std::for_each(words.begin(), wc,
		[](const string &s)
	{
		cout << s << " ";
	});
}

int main()
{
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	bigies(words, 5);

	system("pause");
	return 0;
}