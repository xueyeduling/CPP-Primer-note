#include <iostream>
int main()
{
	//const int buf;	//a.不合法，const对象必须初始化
	int cnt = 0;		//b.合法
	const int sz = cnt;	//c.合法
	//++cnt; ++sz;		//d.不合法，const对象不能改变
	system("pause");
	return 0;
}