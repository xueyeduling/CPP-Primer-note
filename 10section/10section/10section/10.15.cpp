#include <iostream>

int main()
{
	int num = 10;
	auto func = [num](int val) 
	{
		return val + num;
	};

	std::cout << func(22) << std::endl;

	system("pause");
	return 0;
}