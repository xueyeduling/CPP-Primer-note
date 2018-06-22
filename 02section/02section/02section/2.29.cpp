#include <iostream>
int main()
{
	//int i, *const cp;	//a.不合法，常量指针必须初始化
	//int *p1, *const p2;	//b.不合法，常量指针必须初始化
	//const int ic;	//c.不合法，常量必须初始化
	//const int *const p3;	//d.不合法，常量指针必须初始化
	//const int *p;		//e.合法

	//i = ic;	//a.合法，可以将常量赋值给变量
	//p1 = p2;	//b.非法，不能将指向常量的指针赋值给指向变量的指针
	//p1 = &ic;	//c.非法，不能让指向变量的指针指向常量
	//p3 = &ic;	//d.非法，p3是一个常量指针，除了初始化，不能赋值
	//p2 = p1;	//e.非法，p2是一个常量指针，除了初始化，不能赋值
	//ic = *p3;	//f.非法，ic是常量，不能修改
	system("pause");
	return 0;
}