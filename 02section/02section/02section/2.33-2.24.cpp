#include <iostream>
int main()
{
	int i = 0, &r = i;
	auto a = r;		// a是一个整数(r是i的别名，而i是一个整数)
	const int ci = i, &cr = ci;
	auto b = ci;	// b是一个整数(ci的顶层const特性被忽略掉了)
	auto c = cr;	// c是一个整数(cr是ci的别名，ci本身是一个顶层const)
	auto d = &i;	// d是一个整型指针(整数的地址就是指向整数的指针)
	auto e = &ci;	// e是一个指向整数常量的指针(对常量对象取地址是一种底层const)

	const auto f = ci;	// ci的推断类型是int, f是const int

	auto &g = ci;	// g是一个整型常量引用，绑定到ci
	//auto &h = 42;	// 错误：不能为非常量引用绑定字面值
	const auto &j = 42;	// 正确：可以为常量引用绑定字面值

	auto k = ci, &l = i;// k时整数，l时整型引用
	auto &m = ci, *p = &ci;	// m是对常量的引用，p是指向整型常量的指针
							// 错误：i的类型是int而&ci的类型是const int
	//auto &n = i, *p = &ci;

	a = 42;
	b = 42;
	c = 42;
	//d = 42;//错误，应该为*d=42;
	//e = 42;//错误，e是指针，并且指向的是常量整型，所以*e也不对
	//g = 42;//错误，g是整型常量引用，不能修改
	std::cout << a << " " << b << " " << c << std::endl;
	system("pause");
	return 0;
}