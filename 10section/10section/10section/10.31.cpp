#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::istream_iterator;
using std::vector;
using std::string;
using std::ifstream;
using std::ostream_iterator;

int main()
{
	istream_iterator<int> in_iter(cin), eof;
	ostream_iterator<int> out_iter(cout, " ");
	vector<int> ivec(in_iter, eof);
	std::sort(ivec.begin(), ivec.end());
	std::unique_copy(ivec.begin(), ivec.end(), out_iter);
	cout << endl;

	system("pause");
	return 0;
}