#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>

using std::vector;
using std::string;
using std::list;
using std::cout;
using std::endl;

int main()
{
	list<string> lst;
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	std::back_insert_iterator<list<string>> it = std::back_inserter(lst);
	std::sort(words.begin(), words.end());
	std::unique_copy(words.begin(), words.end(), it);
	std::for_each(lst.begin(), lst.end(), [](string s)
	{
		cout << s << " ";
	});
	cout << endl;

	system("pause");
	return 0;
}