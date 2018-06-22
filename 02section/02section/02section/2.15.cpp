#include <iostream>
int main()
{
	int ival = 1.01;	//合法
	//int &rvall = 1.01;	//不合法，引用只能绑定在对象上，不能是字面值或表达式
	int &rval2 = ival;	//合法
	//int &rval3;			//不合法，引用定义时必须初始化
	return 0;
}