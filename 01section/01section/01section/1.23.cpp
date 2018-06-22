#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item,temp;
	if (!(std::cin >> item))
	{
		std::cout << "No book!" << std::endl;
		return 0;
	}
	int i = 1;
	while (std::cin >> temp)
	{
		if (item.isbn() == temp.isbn())
		{
			item += temp;
		}
		else
		{
			std::cout << item << std::endl;
			item = temp;
			continue;
		}
	}
	std::cout << item << std::endl;
	return 0;
}