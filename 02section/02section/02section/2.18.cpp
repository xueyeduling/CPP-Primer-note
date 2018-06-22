#include <iostream>
int main()
{
	int i = 10;
	int j = 20;
	int* p=&i;
	*p = 20;
	p = &j;
	*p = 30;
	std::cout << i << " " << j << std::endl;
	system("pause");
	return 0;
}