#include <iostream>
int main()
{
	int i;
	//¶¥²ãconst
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	//µ×²ãconst			  µ×²ãºÍ¶¥²ãconst µ×²ãconst
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	system("pause");
	return 0;
}