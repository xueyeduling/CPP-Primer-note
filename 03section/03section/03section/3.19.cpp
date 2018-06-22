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
	int num;
	vector<int> ivec;
	while (cin >> num)
		ivec.push_back(num);
	/*for (decltype(ivec.size()) i = 0; i < ivec.size() - 1;++i)
		cout << ivec[i] + ivec[i+1] << endl;*/
	for (decltype(ivec.size()) i = 0; i < ivec.size() / 2; ++i)
		cout << ivec[i] + ivec[ivec.size() - 1 - i] << endl;
	system("pause");
	return 0;
}