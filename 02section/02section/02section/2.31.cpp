#include <iostream>
int main()
{
	int i;
	//顶层const
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	//底层const			  底层和顶层const 底层const
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;

	//合法，r1不是底层const所以可以改变绑定对象的值
	r1 = v2;
	//非法，p2时底层const，p1是指向常量的指针，不能赋值给p1
	//p1 = p2;
	//合法，p1是指向常量的指针，可以赋值给底层const指针
	p2 = p1;
	//非法，p3拥有底层const，不能赋值给指向常量的指针
	//p1 = p3;
	//合法，p2和p3都用有底层const，p3的顶层const不会影响赋值给别人
	p2 = p3;
	system("pause");
	return 0;
}