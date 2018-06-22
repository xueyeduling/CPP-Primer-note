#include <iostream>
int main()
{
	int val = 10;
	while(val >= 0){
		std::cout << val-- << "\t";
	}
	std::cout << std::endl;
	return 0;
}
