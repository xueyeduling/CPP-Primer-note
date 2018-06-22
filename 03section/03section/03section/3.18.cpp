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
	vector<int> ivec1( 10,42 );
	vector<int> ivec2{ 42,42, 42,42, 42,42, 42,42, 42,42 };
	vector<int> ivec3;
	for (int i = 0; i < 10; i++)
		ivec3.push_back(42);
	system("pause");
	return 0;
}