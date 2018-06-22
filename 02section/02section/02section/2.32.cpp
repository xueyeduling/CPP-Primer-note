#include <iostream>
int null = 0;
int main()
{
	// 非法，指针不能初始化为变量，即使变量的值为0
	// int null = 0, *p = null;
	constexpr int *p = &null;
	system("pause");
	return 0;
}