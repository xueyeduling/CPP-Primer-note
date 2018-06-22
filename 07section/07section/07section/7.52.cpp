#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

struct Sales_data2 {
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};


int main(void)
{
	// 错误使用，Sales_data有类内初始值，所以不是聚合的，不能这样使用
	//Sales_data item = { "978-0590353403", 25, 15.99 };

	Sales_data2 item = { "978-0590353403", 25, 15.99 };

	system("pause");
	return 0;
}