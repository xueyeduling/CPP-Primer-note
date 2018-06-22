#include <iostream>
int main()
{
	//j是int
	//k是绑定int常量的引用，相当于const int &k=i;
	//p是指向int常量的指针(底层const)，相当与const int *p=&i;
	//j2是int常量，相当与const int j2=i;
	//k2和k一样
	const int i = 42;
	auto j = i;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i, &k2 = i;
	j = 10;
	k = 10;
	*p = 10;
	j2 = 20;
	k2 = 20;
	system("pause");
	return 0;
}