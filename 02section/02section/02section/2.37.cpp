#include <iostream>
int main()
{
	//变量    类型    值
	//a       int     3
	//b       int     4
	//c       int     3
	//d       int&    3
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;	// a=b返回int&类型，但是b不会赋值给a
	std::cout << "a: " << a << std::endl
		<< "b: " << b << std::endl
		<< "c: " << c << std::endl
		<< "d: " << d << std::endl;
	system("pause");
	return 0;
}