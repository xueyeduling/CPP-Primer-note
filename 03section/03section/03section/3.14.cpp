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
	int val;
	vector<int> ivec;
	while (cin >> val)
	{
		ivec.push_back(val);
	}
	system("pause");
	return 0;
}