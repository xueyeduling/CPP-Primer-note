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
using std::ostream_iterator;

int main(void)
{
	istream_iterator<Sales_item> item_iter(cin), eof;
	ostream_iterator<Sales_item> out_iter(cout, "\n");
	vector<Sales_item> vecSal;
	while (item_iter != eof) {
		vecSal.push_back(*item_iter++);
	}
	sort(vecSal.begin(), vecSal.end(), compareIsbn);
	for (vector<Sales_item>::iterator iter = vecSal.begin(), end; iter != vecSal.end(); iter = end)
	{
		end = find_if(iter, vecSal.end(), [iter](const Sales_item &item){return item.isbn() != iter->isbn(); });
		out_iter = accumulate(iter, end, Sales_item(iter->isbn()));
		iter = end;
	}

	system("pause");
	return 0;
}