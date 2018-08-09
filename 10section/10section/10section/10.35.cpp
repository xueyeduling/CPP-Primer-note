#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ivec{ 1, 2, 3, 4, 5 };
	std::vector<int>::iterator iter = ivec.end();
	while (iter>ivec.begin())
	{
		std::cout << *--iter << " ";
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}