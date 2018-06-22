#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>

using namespace std;

int main(void)
{
	list<int> lst1;
	list<int>::iterator iter1 = lst1.begin(),
		iter2 = lst1.end();
	//while (iter1 < iter2)	// list的迭代器不支持<
	while (iter1 != iter2)	// 支持!=...
		/*...*/;

	system("pause");
	return 0;
}