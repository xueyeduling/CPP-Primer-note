#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book, temp;
	std::cin >> book;
	while(std::cin >> temp) {
		if(temp.isbn() == book.isbn())
			book += temp;
	}
	std::cout << book << std::endl;
	return 0;
}
