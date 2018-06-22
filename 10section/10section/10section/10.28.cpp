#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using std::vector;
using std::cout;
using std::endl;
using std::list;

int main()
{
	std::vector<int> iv{ 1,2,3,4,5 };
	list<int> iv2, iv3, iv4;
	std::copy(iv.begin(), iv.end(), std::back_inserter(iv2));
	std::copy(iv.begin(), iv.end(), std::front_inserter(iv3));
	std::copy(iv.begin(), iv.end(), std::inserter(iv4, iv4.begin()));

	// 1 2 3 4 5
	std::for_each(iv2.begin(), iv2.end(), [](int i) {cout << i << " "; });
	cout << endl;
	// 5 4 3 2 1
	std::for_each(iv3.begin(), iv3.end(), [](int i) {cout << i << " "; });
	cout << endl;
	// 1 2 3 4 5
	std::for_each(iv4.begin(), iv4.end(), [](int i) {cout << i << " "; });
	cout << endl;

	system("pause");
	return 0;
}