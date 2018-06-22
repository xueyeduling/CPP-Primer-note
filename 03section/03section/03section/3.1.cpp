#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
struct Sales_data {
	std::string title;
	std::string author;
	std::string bookNo;
	unsigned int units_sole = 0;
	double revenue = 0.0;
};
int main()
{
#pragma region 1.9
	/*int i = 50;
	int sum=0;
	while (i <= 100)
		sum += i++;
	cout << "The sum of 50 to 100 is: " << sum << endl;

	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.10
	/*int i = 10;
	while (i >= 0)
		cout << i-- << endl;
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.11
	/*int i, j, max, min;
	cout << "Enter two number:" << endl;
	cin >> i >> j;
	max = i > j ? i : j;
	min = i < j ? i : j;
	while (min <= max)
		cout << min++ << endl;
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.20
	/*Sales_data book;
	double price = 0;
	while (cin >> book.title >> book.author >> book.bookNo >> book.units_sole >> price)
	{
	book.revenue = price*book.units_sole;
	cout << book.title << " " << book.author << " " << book.bookNo << " " << book.units_sole << " " << book.revenue << " " << price << endl;
	}
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.21
	/*Sales_data data1, data2;
	double price = 0;
	cin >> data1.title >> data1.author >> data1.bookNo >> data1.units_sole >> price;
	data1.revenue = data1.units_sole*price;
	cin >> data2.title >> data2.author >> data2.bookNo >> data2.units_sole >> price;
	data2.revenue = data2.units_sole*price;
	if (data1.bookNo == data2.bookNo)
	{
	unsigned totalCnt = data1.units_sole + data2.units_sole;
	double totalRevenue = data1.revenue + data2.revenue;
	cout << data1.title << " " << data1.author << " " << data1.bookNo << " " << totalCnt <<" " << totalRevenue << " ";
	if (totalCnt != 0)
	cout << totalRevenue / totalCnt << endl;
	else
	cout << "(no sales)" << endl;
	system("pause");
	return 0;
	}
	else
	{
	cout << "Data must refer to the same ISBN" << endl;
	system("pause");
	return -1;
	}*/
#pragma endregion

#pragma region 1.22
	/*Sales_data data1;
	Sales_data total;
	double price = 0;
	cin >> data1.title >> data1.author >> data1.bookNo >> data1.units_sole >> price;
	data1.revenue = price*data1.units_sole;
	total = data1;
	while (cin >> data1.title >> data1.author >> data1.bookNo >> data1.units_sole >> price)
	{
	data1.revenue = price*data1.units_sole;
	total.units_sole += data1.units_sole;
	total.revenue += data1.revenue;
	}
	cout << total.title << " " << total.author << " " << total.bookNo << " " << total.units_sole << " " << total.revenue << " ";
	if (data1.units_sole != 0)
	{
	cout << total.revenue / total.units_sole << endl;
	}
	else
	{
	cout << "(no sales)" << endl;
	}
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.23
	/*Sales_data data, dataTotal;
	double price = 0;
	cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	while (cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price)
	{
	if (dataTotal.bookNo == data.bookNo)
	{
	dataTotal.units_sole += data.units_sole;
	dataTotal.revenue += data.units_sole*price;
	}
	else
	{
	cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
	if (dataTotal.units_sole != 0)
	cout << dataTotal.revenue / dataTotal.units_sole << endl;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	}
	}
	cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
	if (dataTotal.units_sole != 0)
	cout << dataTotal.revenue / dataTotal.units_sole << endl;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	system("pause");
	return 0;*/
#pragma endregion

#pragma region 1.25
	/*Sales_data data;
	double price = 0;
	if (cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price)
	{
	Sales_data dataTotal;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	while (cin >> data.title >> data.author >> data.bookNo >> data.units_sole >> price)
	{
	if (dataTotal.bookNo == data.bookNo)
	{
	dataTotal.units_sole += data.units_sole;
	dataTotal.revenue += data.units_sole*price;
	}
	else
	{
	cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
	if (dataTotal.units_sole != 0)
	cout << dataTotal.revenue / dataTotal.units_sole << endl;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	}
	}
	cout << dataTotal.title << " " << dataTotal.author << " " << dataTotal.bookNo << " " << dataTotal.units_sole << " " << dataTotal.revenue << " ";
	if (dataTotal.units_sole != 0)
	cout << dataTotal.revenue / dataTotal.units_sole << endl;
	dataTotal = data;
	dataTotal.revenue = data.units_sole*price;
	system("pause");
	return 0;
	}
	else
	{
	cout<<"No data?"<<endl;
	system("pause");
	return -1;
	}*/
#pragma endregion
}