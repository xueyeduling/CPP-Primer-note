#include <iostream>
int main()
{
	// 这段代码将i的值变为i的平方
	int i = 42;
	int* p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << i << std::endl;
	system("pause");
	return 0;
}