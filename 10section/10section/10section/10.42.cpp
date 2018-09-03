#include <iostream>
#include <list>
#include <algorithm>

using std::list;
using std::string;

void elimDups(list<string> &words)
{
	words.sort();
	list<string>::iterator end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

int main(void)
{
	list<string> words{ "aaa", "bbb", "ccc", "bbb", "aaa" };
	elimDups(words);

	return 0;
}