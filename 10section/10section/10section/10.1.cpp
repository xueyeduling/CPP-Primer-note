#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::vector;
using std::endl;
using std::cin;

int main()
{
	vector<int> vecs;
	int num;
	while (cin >> num)
	{
		vecs.push_back(num);
	}
	int count1 = count(vecs.begin(), vecs.end(), 6);
	cout << "The vector have 6 is: " << count1 << endl;

	system("pause");
	return 0;
}