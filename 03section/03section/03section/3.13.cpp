#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	//a. not element
	vector<int> v1;
	//b. 10 elements, all value is 0
	vector<int> v2(10);
	//c. 10 elements, all value is 42;
	vector<int> v3(10, 42);
	//d. one elements, value is 10
	vector<int> v4{ 10 };
	//e. two elements, value is 10, 42
	vector<int> v5{ 10,42 };
	//f. 10 elements, all is null string
	vector<string> v6{ 10 };
	//g. 10 elements, all is hi
	vector<string> v7{ 10,"hi" };
	for (string i : v7)
	{
		cout << i << endl;
	}
	system("pause");
	return 0;
}