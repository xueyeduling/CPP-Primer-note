#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	string s;
	cout << "Enter a string: ";
	cin >> s;
	for(char &i:s)
	{
		if (ispunct(i))
			i=' ';
	}
	cout << s << endl;
	system("pause");
	return 0;
}