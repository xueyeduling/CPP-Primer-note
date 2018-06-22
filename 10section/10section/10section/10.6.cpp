#include <vector>
#include <algorithm>
using std::vector;

int main()
{
	vector<int> ivec{ 0,1,2,3 };
	std::fill(ivec.begin(), ivec.end(), 0);

	system("pause");
	return 0;
}