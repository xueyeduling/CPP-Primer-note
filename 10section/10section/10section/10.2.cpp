#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::cout;
using std::vector;
using std::endl;
using std::string;
using std::cin;

int main()
{
	vector<string> vecs;
	string word;
	while (cin >> word)
	{
		vecs.push_back(word);
	}
	int count1 = count(vecs.begin(), vecs.end(), "haha");
	cout << "The vector have \"haha\" is: " << count1 << endl;

	system("pause");
	return 0;
}