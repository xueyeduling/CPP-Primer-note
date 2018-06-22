#include <iostream>
int main()
{
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;	//合法，将3.14159赋值给d;
	r2 = r1;		//合法，将i赋值给d
	i = r2;			//合法，将d赋值给i，可能会丢失数据
	r1 = d;			//合法，将d赋值给i，可能会丢失数据
	std::cout << i << "\t" << d << std::endl;
	system("pause");
	return 0;
}