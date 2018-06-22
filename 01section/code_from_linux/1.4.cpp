#include <iostream>
int main()
{
	std::cout << "Enter tow numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The accumulate of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	return 0;
}
