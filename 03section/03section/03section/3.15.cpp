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
	string val;
	vector<string> svec;
	//while (cin >> val)
	while(getline(cin,val))
	{
		svec.push_back(val);
	}
	for (string s : svec)
	{
		cout << s <<endl;
	}
	system("pause");
	return 0;
}