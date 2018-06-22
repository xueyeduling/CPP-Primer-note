#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	// 更侧向与前一种吧，也就是while循环不知道范围的，for循环直到范围的
	// 因为这样看起来更加清晰

	/*vector<string> svec;
	string tmp;
	while (getline(cin, tmp))
		svec.push_back(tmp);
	for (auto itBeg = svec.begin(),itEnd=svec.end(); itBeg !=itEnd ; ++itBeg)
	{
		cout << *itBeg << ' ';
	}
	cout << endl;*/

	/*vector<string> svec;
	string tmp;
	for (; getline(cin, tmp);)
		svec.push_back(tmp);
	auto itBeg = svec.begin(), itEnd = svec.end();
	while (itBeg != itEnd)
		cout << *itBeg++ << ' ';
	cout << endl;*/
	system("pause");
	return 0;
}