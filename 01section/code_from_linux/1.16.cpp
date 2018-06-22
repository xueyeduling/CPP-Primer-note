#include <iostream>
int main()
{
	int val = 0;
	int sum = 0;
	while(std::cin >> val){
		sum += val;
	}
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
