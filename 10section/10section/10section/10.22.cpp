#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() <= sz;
}

int main()
{
	auto fnc = std::bind(check_size, _1, 6);
	vector<string> words = { "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	auto count = std::count_if(words.begin(), words.end(), fnc);
	cout << count << endl;

	system("pause");
	return 0;
}