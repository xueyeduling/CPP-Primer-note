#include <iostream>
int main()
{
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2;	// 错误：使用了"v"而非"v1"
	// 错误：cout未定义；应该是std::cout
	cout << v1 + v2 << std::endl;
	return 0;
}
