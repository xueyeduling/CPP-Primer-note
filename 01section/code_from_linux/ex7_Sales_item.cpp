#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book;
	// 读入ISBN号，售出的册数以及销售价格
	std::cin >> book;
	// 写入ISBN、售出的册数、总销售额和平均价格
	std::cout << book << std::endl;
	return 0;
}
