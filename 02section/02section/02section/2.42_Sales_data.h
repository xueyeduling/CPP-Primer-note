#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
	std::string title;
	std::string author;
	std::string bookNo;
	unsigned int units_sole = 0;
	double revenue = 0.0;
};
#endif