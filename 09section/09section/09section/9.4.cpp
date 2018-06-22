#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

bool IsFind(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
	while (begin != end)
	{
		if (*begin == val)
			return true;
		++begin;
	}
	return false;
}

int main(void)
{
	vector<int> vec{ 1,2,3,4,5,6 };

	cout << IsFind(vec.begin(), vec.end(), 0) << endl;
	cout << IsFind(vec.begin(), vec.end(), 1) << endl;
	cout << IsFind(vec.begin(), vec.end(), 3) << endl;
	cout << IsFind(vec.begin(), vec.end(), 6) << endl;
	cout << IsFind(vec.begin(), vec.end(), 8) << endl;

	system("pause");
	return 0;
}