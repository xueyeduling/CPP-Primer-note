#include <iostream>
int main()
{
	int v1 = 0, v2 = 1;
	int max, min;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> v1 >> v2;
	max = v1 > v2 ? v1 : v2;
	min = v1 > v2 ? v2 : v1;
	for(; min <= max; min++)
	{
		std::cout << min << "\t";
	}
	std::cout << std::endl;
	return 0;
}
