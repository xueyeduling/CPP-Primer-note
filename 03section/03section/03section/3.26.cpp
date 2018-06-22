#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

// error: 迭代器没有定义两个迭代器相加的运算符

int main()
{
	string sought = "aa";
vector<string> text;
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2; // original midpoint
	//auto mid = (beg+end) / 2; // original midpoint
	// while there are still elements to look at and we haven't yet found sought
	while (mid != end&*mid != sought) {
		if (sought < *mid)	// is the element we want in the first half?
			end = mid;		// if so, adjust the range to ignore the second half
		else				// the element we want is in the second half
			beg = mid + 1;	// start looking with the element just after mid
		mid = beg + (end - beg) / 2;	// new midpoint
	}
}