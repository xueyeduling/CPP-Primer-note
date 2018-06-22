#include <iostream>
struct Foo{}	//注意：没有分号
int main()
{
	system("pause");
	return 0;
}
/*编译报错：error: expected ‘;’ after struct definition
struct Foo {}*/