#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// 将a的定义和声明放在头文件中
// 将b的定义放在源文件中，声明放在头文件中
// 因为a是内联函数，可以多次定义，而且每个文件都需要一个定义
// b不是内联函数，一个项目中只能定义一次

//a.
inline bool eq(const BigInt&, const BigInt&)
{
	/* ...*/
}

//b.
void putValues(int *arr, int size);

int main(void)
{


	printf("\n");
	system("pause");
	return 0;
}
