#include <iostream>
int main()
{
	int* ip, i, &r = i;	//a. ip是指向int类型的指针，i是int变量，r是int类型的引用
						// ip和i的值为随机，r绑定i
	int i, *ip = 0;		//b. i是int变量，ip是指向int类型的指针
						// i的值为随机，ip的值为0
	int* ip, ip2;		//c.ip为指向int类型的指针，ip2为int变量
						// 它们的值都不确定
	system("pause");
	return 0;
}