#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <fstream>

using std::cin;
using std::istream_iterator;
using std::vector;
using std::string;
using std::ifstream;

int main()
{
	ifstream ifs("10.1.cpp");
	istream_iterator<string> siter(ifs), eof;
	vector<string> svec(siter,eof);

	for (auto var : svec)
	{
		std::cout << var << std::endl;
	}

	ifs.close();

	system("pause");
	return 0;
}