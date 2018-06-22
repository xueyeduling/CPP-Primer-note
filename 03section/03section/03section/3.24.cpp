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
	int num;
	vector<int> ivec;
	while (cin >> num)
		ivec.push_back(num);
	/*for (auto it = ivec.begin() + 1; it != ivec.cend(); it++)
	{
		cout << *it + *(it - 1) << "\t";
	}*/
	for (auto it = ivec.begin(), it2 = ivec.end() - 1; it < it2; it++, it2--)
	{
		cout << *it + *it2 << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}