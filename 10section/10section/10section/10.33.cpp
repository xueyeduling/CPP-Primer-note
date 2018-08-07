#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <numeric>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::istream_iterator;
using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ostream_iterator;

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << "use " << argv[0] << " InFIleName OutFileName OutFileName" << endl;

		system("pause");
		return -1;
	}

	ifstream ifs(argv[1]);
	ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

	istream_iterator<int> in(ifs), in_eof;
	ostream_iterator<int> out_odd(ofs_odd, " ");
	ostream_iterator<int> out_even(ofs_even, "\n");

	for_each(in, in_eof, [&out_odd, &out_even](const int i){
		*(i & 0x1 ? out_odd : out_even)++ = i;
	});

	system("pause");
	return 0;
}