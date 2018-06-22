#include <iostream>
int j = 0;
constexpr int i = 42;
int main()
{
	//const int max_files = 20;	// 是
	//const int limit = max_files + 1;// 是
	//int staff_size = 27;	// 不是
	//const int sz = get_size();	// 不是

	const int *p = nullptr;	//p是一个指向常量的指针
	constexpr int *q = nullptr;//q是一个指向整数的常量指针

	constexpr int *np = nullptr;//np是一个指向整数的常量指针，其值为空
	constexpr const int *p = &i;//p是常量指针，指向整型常量i
	constexpr int *p1 = &j;//p1是常量指针，指向整数j
	system("pause");
	return 0;
}