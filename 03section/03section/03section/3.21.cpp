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
	cout << v1.end() - v1.begin() << endl;
	for (auto it = v1.cbegin(); it != v1.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	//b. 10 elements, all value is 0
	vector<int> v2(10);
	cout << v2.end() - v2.begin() << endl;
	for (auto it = v2.cbegin(); it != v2.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	//c. 10 elements, all value is 42;
	vector<int> v3(10, 42);
	cout << v3.end() - v3.begin() << endl;
	for (auto it = v3.cbegin(); it != v3.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	//d. one elements, value is 10
	vector<int> v4{ 10 };
	cout << v4.end() - v4.begin() << endl;
	for (auto it = v4.cbegin(); it != v4.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	//e. two elements, value is 10, 42
	vector<int> v5{ 10,42 };
	cout << v5.end() - v5.begin() << endl;
	for (auto it = v5.cbegin(); it != v5.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	//f. 10 elements, all is null string
	vector<string> v6{ 10 };
	cout << v6.end() - v6.begin() << endl;
	for (auto it = v6.cbegin(); it != v6.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	//g. 10 elements, all is hi
	vector<string> v7{ 10,"hi" };
	cout << v7.end() - v7.begin() << endl;
	for (auto it = v7.cbegin(); it != v7.cend(); ++it)
		cout << *it << "\t";
	cout << endl;
	system("pause");
	return 0;
}