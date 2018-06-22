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
	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade)
		if (grade <= 100)
			(*(scores.begin()+grade / 10))++;
	for (int i : scores)
		cout << i << " ";
	cout << endl;
	system("pause");
	return 0;
}