#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

istream &Func(istream &istr)
{
	char ch;
	while (istr >> ch)
		cout << ch;
	cout << endl;
	istr.clear();
	return istr;
}

int main(void)
{
	if (Func(cin))
		cout << "Func() is ok!" << endl;

	system("pause");
	return 0;
}