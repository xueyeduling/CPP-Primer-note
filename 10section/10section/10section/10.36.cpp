#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
	list<int> ilist{ 1, 0, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 0 };
	list<int>::const_reverse_iterator pos = find(ilist.rbegin(), ilist.rend(), 0);

	cout << *pos << endl;
	cout << *++pos << endl;
	cout << distance(pos, ilist.crend()) << endl;

	system("pause");
	return 0;
}