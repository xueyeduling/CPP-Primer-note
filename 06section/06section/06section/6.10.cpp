#include "Chen_Yin.h"
void swop(int* val1p, int* val2p)
{
	*val1p += *val2p;
	*val2p = *val1p - *val2p;
	*val1p -= *val2p;
}
int main()
{
	int val1, val2;
	cin >> val1 >> val2;
	swop(&val1, &val2);
	cout << val1 << ' ' << val2 << endl;
	system("pause");
	return 0;
}