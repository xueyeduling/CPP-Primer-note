#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// 成员的初始化顺序与它们在类定义中的出现顺序一致
// 所以会先初始化rem，此时base是未定义的
struct X {
	//X(int i, int j) :base(i), rem(base%j) {}
	// 修改
	X(int i, int j) :base(i), rem(i%j) {}
	int rem, base;
};

int main(void)
{
	X x(10, 7);
	std::cout << x.rem << std::endl << x.base << std::endl;

	system("pause");
	return 0;
}