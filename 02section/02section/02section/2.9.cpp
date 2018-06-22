#include <iostream>
int main()
{
	//a. std::cin >> int input_value;// 不能定义时输入
	/*int input_value;
	std::cin >> input_value;
	std::cout << input_value << std::endl;*/

	//b. int i = { 3.14 };	// {}赋值如果存在丢失信息的风险，将会报错
	// int i = 3.14;
	/*int i(3.14);
	std::cout << i << std::endl;*/

	//c. double wage = 55.5;
	//double salary = wage = 9999.99;	// 正确，将wage赋值为9999.99，然后将salary赋值为wage
	//std::cout << wage << std::endl;

	//d. int i = 3.14;	// 给i赋值为3.14，小数部分会丢失
	//std::cout << i << std::endl;
	system("pause");
	return 0;
}