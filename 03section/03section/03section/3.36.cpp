#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstddef>
#include <iterator>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr[3] = { 1,2,3 };
	int arr2[3] = { 1,5,6 };
	if ((end(arr) - begin(arr)) == (end(arr) - begin(arr)))
	{
		for (int *p = begin(arr), *p2 = begin(arr2); p != end(arr);)
		{
			if (*p++ != *p2++)
			{
				cout << "arr!=arr2" << endl;
				break;
			}
		}
	}
	else
		cout << "arr!=arr2" << endl;
	system("pause");
	return 0;
}