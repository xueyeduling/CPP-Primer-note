#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator IsFind(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
	while (begin != end)
	{
		if (*begin == val)
			return begin;
		++begin;
	}
	return end;
}

int main(void)
{
	vector<int> vec{ 1,2,3,4,5,6 };
	vector<int>::iterator iter;

	iter = IsFind(vec.begin(), vec.end(), 0);
	if (iter != vec.end())
		cout << *iter << endl;
	iter = IsFind(vec.begin(), vec.end(), 1);
	if (iter != vec.end())
		cout << *iter << endl;
	iter = IsFind(vec.begin(), vec.end(), 3);
	if (iter != vec.end())
		cout << *iter << endl;
	iter = IsFind(vec.begin(), vec.end(), 6);
	if (iter != vec.end())
		cout << *iter << endl;
	iter = IsFind(vec.begin(), vec.end(), 8);
	if (iter != vec.end())
		cout << *iter << endl;

	system("pause");
	return 0;
}