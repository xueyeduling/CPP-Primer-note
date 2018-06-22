#include <iostream>
int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i)	// 内层局部变量，在for循环中覆盖了上一个i的值
		sum += i;
	std::cout << i << " " << sum << std::endl;
	system("pause");
	return 0;
}