#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main1()
{
	unsigned buf_size = 1024;
	//a 非法，因为维度不是一个常量
	int ia[buf_size];
	//b 合法
	int ia[4 * 7 - 14];
	//c 非法，因为维度不是一个常量
	int ia[txt_size()];
	//d 非法，长度不够，越界
	char st[11] = "fundamental";
	system("pause");
	return 0;
}