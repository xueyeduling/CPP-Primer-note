#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

bool check_size(std::string str, std::string::size_type sz)
{
	return str.size() < sz;
}

int main()
{
	std::string s;
	std::cin >> s;

	std::vector<int> iv{ 2,4,6,8,10,12,14,16 };
	auto result = std::find_if(iv.begin(), iv.end(), std::bind(check_size, s, std::placeholders::_1));
	if (result != iv.end())
		std::cout << *result << std::endl;
	else
		std::cout << "Not found!" << std::endl;

	system("pause");
	return 0;
}