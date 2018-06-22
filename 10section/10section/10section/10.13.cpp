#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::string;

bool isGreater5(const string &s)
{
	return s.size() >= 5;
}

int main()
{
	std::vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	std::vector<string>::iterator end = std::partition(words.begin(), words.end(), isGreater5);

	for (auto beg = words.begin(); beg != end; ++beg)
	{
		cout << *beg << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}