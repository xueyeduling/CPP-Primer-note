#include <iostream>
int main()
{
	//decltype指定类型是获取的表达式的类型
	//auto是获取的变量(或表达式)的值的类型
	//一样
	int num1 = 10;
	decltype(num1) num2 = 20;
	auto num3 = 20;
	//不一样
	int *p1 = &num1;
	decltype(*p1) p2= num1;//p2是int&
	auto p3 = *p1;//p3是int

	const int cn1 = 20;
	decltype(cn1) cn2 = 30;//cn2是const int
	auto cn3 = 40;//cn3是int

	int &nn1 = num1;
	decltype(nn1) nn2 = num1;//nn2是int&
	auto nn3 = nn1;//nn3是int


	system("pause");
	return 0;
}