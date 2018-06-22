#include <iostream>
#include <vector>

using namespace std;

// example.h
class Example {
public:
	static constexpr double rate = 6.5;
	static constexpr int vecSize = 20;
	static vector<double> vec;
};

// example.c
//#include "example.h"
constexpr double Example::rate;
//vector<double> Example::vec;

int main()
{

	system("pause");
	return 0;
}