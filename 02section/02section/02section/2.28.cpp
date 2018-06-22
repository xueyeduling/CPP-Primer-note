#include <iostream>
int main()
{
	//int i, *const cp;	//a.不合法，常量指针必须初始化
	//int *p1, *const p2;	//b.不合法，常量指针必须初始化
	//const int ic, &r = ic;	//c.不合法，常量必须初始化
	//const int *const p3;	//d.不合法，常量指针必须初始化
	const int *p;		//e.合法
	system("pause");
	return 0;
}