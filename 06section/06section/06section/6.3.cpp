#include "Chen_Yin.h"
int fact(int num)
{
	int result = 1;
	while (num > 1)
		result *= num--;
	return result;
}
int main()
{
	int num;
	while (cin >> num) {
		cout << fact(num) << endl;
	}
	return 0;
}