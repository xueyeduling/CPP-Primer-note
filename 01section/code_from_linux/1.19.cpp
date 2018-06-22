#include <iostream>
int main()
{
	int v1 = 0, v2 = 0;
	int max, min;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> v1 >> v2;
	if(v1 > v2){
		max = v1;
		min = v2;
	}
	else {
		max = v2;
		min = v1;
	}
	while(min <= max){
		std::cout << min++ << "\t";
	}
	std::cout << std::endl;
	return 0;
}
