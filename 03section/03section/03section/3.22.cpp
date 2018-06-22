#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> text = { "haha, a good day.","yes, the sum is so big.","where are you want to go.","I want to go haiyabinfencheng.","","A good supermake." };
	for (auto it = text.begin(); it != text.cend() && !it->empty(); ++it)
	{
		for (auto it2 = it->begin(); it2 != it->cend(); ++it2)
			*it2 = toupper(*it2);
	}
	for (auto it = text.cbegin(); it != text.cend(); it++)
		cout << *it << endl;
	system("pause");
	return 0;
}