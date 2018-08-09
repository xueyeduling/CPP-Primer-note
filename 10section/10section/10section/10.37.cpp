#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	list<int> ilist(8 - 3);
	std::copy(ivec.cbegin() + 2, ivec.cbegin() + 7, ilist.rbegin());

	for (int i : ilist)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}