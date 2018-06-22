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
	//a. legal, ivec's type is vector<int>
	vector<vector<int>> ivec;
	//b. illegal, ivec's type is vector<int>, svec's type is string
	//vector<string> svec = ivec;
	//c. legal, svec has ten elements, everyone value is "null"
	vector<string> svec(10, "null");
	system("pause");
	return 0;
}