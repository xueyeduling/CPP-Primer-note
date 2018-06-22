#include <iostream>
// 该程序仅用于说明：函数内部不宜定义与全局变量同名的新变量
int reused = 42;	// reused拥有全局作用域
int main()
{
	int unique = 0;	// unique拥有块作用域
	// 输出#1：使用全局变量reused；输出 42 0
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;	// 新建局部变量reused，覆盖了全局变量reused
	// 输出#2：使用局部变量reused；输出0 0
	std::cout << reused <<" "<< unique << std::endl;
	// 输出#3：显式地访问全局变量reused；输出42 0
	std::cout << ::reused << " " << unique << std::endl;
	system("pause");
	return 0;
}