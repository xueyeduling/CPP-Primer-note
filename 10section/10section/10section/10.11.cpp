#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout; using std::endl;
using std::string;

template<class T>
void eliminate_duplicates(T &container)
{
	std::sort(container.begin(), container.end());
	auto end_unique = std::unique(container.begin(), container.end());
	container.erase(end_unique, container.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	std::vector<string> svec{ "aaa","bbb","ccc","aaaa","bbbb","aa","aaa","bbb" };
	eliminate_duplicates(svec);
	std::for_each(svec.begin(), svec.end(), [](string s) {cout << s << " "; });
	cout << endl << "----------------------------------" << endl;
	std::stable_sort(svec.begin(), svec.end(), isShorter);
	std::for_each(svec.begin(), svec.end(), [](string s) {cout << s << " "; });

	system("pause");
	return 0;
}