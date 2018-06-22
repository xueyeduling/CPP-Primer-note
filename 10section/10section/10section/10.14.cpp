#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main(void)
{
	auto func = [](int v1, int v2) {return v1 + v2; };

	cout << func(10, 22) << endl;

	system("pause");
	return 0;
}