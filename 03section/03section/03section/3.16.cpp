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
	cout << v1.size() << endl;
	for (decltype(v1.size()) i : v1)
	{
		cout << i << endl;
	}
	//b. 10 elements, all value is 0
	vector<int> v2(10);
	cout << v2.size() << endl;
	for (decltype(v2.size()) i : v2)
	{
		cout << i << "\t";
	}
	cout << endl;
	//c. 10 elements, all value is 42;
	vector<int> v3(10, 42);
	cout << v3.size() << endl;
	for (auto i : v3)
	{
		cout << i << "\t";
	}
	cout << endl;
	//d. one elements, value is 10
	vector<int> v4{ 10 };
	cout << v4.size() << endl;
	for (auto i : v4)
	{
		cout << i << "\t";
	}
	cout << endl;
	//e. two elements, value is 10, 42
	vector<int> v5{ 10,42 };
	cout << v5.size() << endl;
	for (auto i : v5)
	{
		cout << i << "\t";
	}
	cout << endl;
	//f. 10 elements, all is null string
	vector<string> v6{ 10 };
	cout << v6.size() << endl;
	for (auto i : v6)
	{
		cout << i << "\t";
	}
	cout << endl;
	//g. 10 elements, all is hi
	system("pause");
	return 0;
}