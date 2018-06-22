#include <iostream>
int main()
{
	int i = -1, &r = 0;		//a.非法，非常量引用不能绑定字面值
	const int i = -1, &r = 0;	//c.合法
	const int i2 = i, &r = i;	//g.合法
	int *const p2 = &i2;		//b.非法，i2是一个常量，只能用指向常量的指针指向它
	const int *const p3 = &i2;	//d.合法
	const int *p1 = &i2;		//e.合法
	const int &const r2;		//f.非法，未初始化，如果初始化则合法
	system("pause");
	return 0;
}