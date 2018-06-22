#include <iostream>
#include <string>

std::string global_str;	// 初始值为空串
int global_int;	// 初始值为0
int main()
{
	int local_int;	// 未被初始化，值未定义，访问会出错
	std::string local_str;	// 初始值为空串
	std::cout << global_str << local_str << global_int << "\t" << std::endl;
	system("pause");
	return 0;
}