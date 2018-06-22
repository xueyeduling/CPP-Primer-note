#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string s;
	cout << "Enter a string: \n";
	getline(cin, s);
	for (char &item : s)
		item = 'X';
	cout << s << endl;
	system("pause");
	return 0;
}