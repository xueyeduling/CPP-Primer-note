#include <iostream>
int main()
{
	int i = 0;
	//double* dp = &i;	// a.错误，类型不匹配
	//int* ip = i;	// b.错误，不能把int变量赋值给指针，即使值为0
	int *p = &i;	// c.正确，p指向i
	system("pause");
	return 0;
}