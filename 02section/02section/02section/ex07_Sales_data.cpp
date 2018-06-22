#include <iostream>
#include <string>
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenus = 0.0;
};
int main()
{
	Sales_data data1, data2;
	double price = 0;	// 书的单价，用于计算销售收入
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenus = data1.units_sold*price;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenus = data2.units_sold*price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenus + data2.revenus;
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		system("pause");
		return 0;	// 标示成功
	}
	else{			// 两笔交易的ISBN不一样
		std::cout << "Data must refer to the same ISBN"<< std::endl;
		system("pause");
		return -1;	// 标示失败
	}
}