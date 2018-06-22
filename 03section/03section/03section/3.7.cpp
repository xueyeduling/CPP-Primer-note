#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//s的值不会改变
	string s;
	cin >> s;
	for (auto i : s)
		i = 'X';
	cout << s;
	system("pause");
	return 0;
}