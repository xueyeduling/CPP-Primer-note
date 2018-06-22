#include <iostream>
#include <vector>
#include <numeric>
using std::vector;
using std::accumulate;
using std::cout;
using std::endl;

int main()
{
	vector<int> veci{ 1,2,3,4,5 };
	int countVeci = accumulate(veci.begin(), veci.end(), 0);

	cout << countVeci << endl;

	system("pause");
	return 0;
}