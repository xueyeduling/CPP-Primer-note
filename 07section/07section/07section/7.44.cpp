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
	// 不合法，NoDefault没有默认的构造函数
	vector<NoDefault> vec(10);

	system("pause");
	return 0;
}