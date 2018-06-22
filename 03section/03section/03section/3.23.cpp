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
	vector<int> ivec;
	for (int i = 0; i < 10; i++)
		ivec.push_back(i);
	for (auto it = ivec.begin(); it != ivec.cend(); it++)
		*it *= 2;
	for (auto it = ivec.cbegin(); it != ivec.cend(); it++)
		cout << *it << "\t";
	cout << endl;

	system("pause");
	return 0;
}