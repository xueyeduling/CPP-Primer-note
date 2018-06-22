#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if (s1 == s2)
		cout << "s1=s2" << endl;
	else
		cout << (s1 > s2 ? s1 : s2) << endl;
	system("pause");
	return 0;
}