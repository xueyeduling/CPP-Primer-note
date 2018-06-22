#include <iostream>
int main()
{	
	// std::cout << "The sum of " << v1;
	//			 << " and " << v2;
	// 			 << " is " << v1 + v2 << std::endl;
	// 不合法，因为第二行和第三行没有ostream对象。
	int v1 = 1, v2 = 2;
	std::cout << "The sum of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 + v2 << std::endl;
	return 0;
}
