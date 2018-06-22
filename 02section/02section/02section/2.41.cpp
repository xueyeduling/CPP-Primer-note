#include <iostream>
#include <string>
struct Sales_data {
	std::string title;
	std::string author;
	std::string bookNo;
	unsigned int units_sole = 0;
	double revenue = 0.0;
};
int main()
{
#pragma region 1.20
	/*Sales_data book;
	double price = 0;
	while (std::cin >> book.title >> book.author >> book.bookNo >> book.units_sole >> price)
	{
		book.revenue = price*book.units_sole;
		std::cout << book.title << " " << book.author << " " << book.bookNo << " " << book.units_sole << " " << book.revenue << " " << price << std::endl;
	}
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.21
	/*Sales_data data1, data2;
	double price = 0;
	std::cin >> data1.title >> data1.author >> data1.bookNo >> data1.units_sole >> price;
	data1.revenue = data1.units_sole*price;
	std::cin >> data2.title >> data2.author >> data2.bookNo >> data2.units_sole >> price;
	data2.revenue = data2.units_sole*price;
	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sole + data2.units_sole;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.title << " " << data1.author << " " << data1.bookNo << " " << totalCnt <<" " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
		system("pause");
		return 0;
	}
	else
	{
		std::cout << "Data must refer to the same ISBN" << std::endl;
		system("pause");
		return -1;
	}*/
#pragma endregion

#pragma region 1.22
	/*Sales_data data1;
	Sales_data total;
	double price = 0;
	std::cin >> data1.title >> data1.author >> data1.bookNo >> data1.units_sole >> price;
	data1.revenue = price*data1.units_sole;
	total = data1;
	while (std::cin >> data1.title >> data1.author >> data1.bookNo >> data1.units_sole >> price)
	{
		data1.revenue = price*data1.units_sole;
		total.units_sole += data1.units_sole;
		total.revenue += data1.revenue;
	}
	std::cout << total.title << " " << total.author << " " << total.bookNo << " " << total.units_sole << " " << total.revenue << " ";
	if (data1.units_sole != 0)
	{
		std::cout << total.revenue / total.units_sole << std::endl;
	}
	else
	{
		std::cout << "(no sales)" << std::endl;
	}
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.23
	/*Sales_data data, dataTotal;
	double price = 0;
	std::cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	while (std::cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price)
	{
		if (dataTotal.bookNo == data.bookNo)
		{
			dataTotal.units_sole += data.units_sole;
			dataTotal.revenue += data.units_sole*price;
		}
		else
		{
			std::cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
			if (dataTotal.units_sole != 0)
				std::cout << dataTotal.revenue / dataTotal.units_sole << std::endl;
			dataTotal = data;
			dataTotal.revenue = data.units_sole*price;
		}
	}
	std::cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
	if (dataTotal.units_sole != 0)
		std::cout << dataTotal.revenue / dataTotal.units_sole << std::endl;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.25
	/*Sales_data data;
double price = 0;
if (std::cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price)
{
	Sales_data dataTotal;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	while (std::cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price)
	{
		if (dataTotal.bookNo == data.bookNo)
		{
			dataTotal.units_sole += data.units_sole;
			dataTotal.revenue += data.units_sole*price;
		}
		else
		{
			std::cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
			if (dataTotal.units_sole != 0)
				std::cout << dataTotal.revenue / dataTotal.units_sole << std::endl;
			dataTotal = data;
			dataTotal.revenue = data.units_sole*price;
		}
	}
	std::cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
	if (dataTotal.units_sole != 0)
		std::cout << dataTotal.revenue / dataTotal.units_sole << std::endl;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	system("pause");
	return 0;
}
else
{
	std::cout<<"No data?"<<std::endl;
	system("pause");
	return -1;
}*/
#pragma endregion

}