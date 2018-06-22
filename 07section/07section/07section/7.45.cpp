#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using std::vector;

struct NoDefault {
	NoDefault(int i) {};
};

struct C {
	C() :n(0) {}
	NoDefault n;
};

int main(void)
{
	// 合法，C有默认的构造函数
	vector<C> vec(10);

	system("pause");
	return 0;
}