#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cctype>
#include <cstddef>
#include <iterator>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//a.
	sizeof x + y;
	(sizeof x) + y;
	//b.
	sizeof p->mem[i];
	sizeof(p->mem[i]);
	//c.
	sizeof a < b;
	(sizeof a) < b;
	//d.
	sizeof f();
	sizeof(f());
	return 0;
}