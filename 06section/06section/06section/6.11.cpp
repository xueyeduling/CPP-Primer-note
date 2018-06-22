#include "Chen_Yin.h"
void reset(int &num)
{
	num = 0;
}
int main()
{
	int num;
	cin >> num;
	reset(num);
	cout << num << endl;
	system("pause");
	return 0;
}