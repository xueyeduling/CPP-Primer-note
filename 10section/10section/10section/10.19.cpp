#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;

void bigies(vector<string> &words,
	vector<string>::size_type sz)
{
	// 将words按字典序排序，删除重复单词
	// 按长度排序，长度相同的单词维持字典序
	[](vector<string> &words)
	{
		// 按字典序排序words，以便查找重复单词
		sort(words.begin(), words.end());
		// unique重排输入范围，使得每个单词只出现一次
		// 排序在范围的前部，返回指向不重复区域之后一个位置的迭代器
		vector<string>::iterator end_unique = std::unique(words.begin(), words.end());
		// 使用向量操作erase删除重复单词
		words.erase(end_unique, words.end());
	}(words);
	std::stable_sort(words.begin(), words.end(),
		[](const string &a, const string &b)
	{
		return a.size() < b.size();
	});
	// 获取一个迭代器，指向第一个瞒住size()>=sz的元素
	// stable_partition 把符合谓词的元素按原有序列放在序列前面，后面的序列按原有顺序排序
	auto wc = std::stable_partition(words.begin(), words.end(),
		[sz](const string &a)
	{
		return a.size() >= sz;
	});
	// 计算满足于size>=sz的元素的数目
	auto count = wc - words.begin();
	// 打印长度大于等于给定值的单词，每个单词后面接一个空格
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