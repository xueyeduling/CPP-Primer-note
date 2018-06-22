#include <iostream>
#include <vector>
#include <numeric>
using std::vector;
using std::accumulate;
using std::cout;
using std::endl;

// 会用int的+号，并且返回值是int，所以会丢失精度
int main()
{
	vector<double> veci{ 1.1,2.2,3.3,4.4,5.5 };
	double countVeci = accumulate(veci.begin(), veci.end(), 0.0);

	cout << countVeci << endl;

	system("pause");
	return 0;
}