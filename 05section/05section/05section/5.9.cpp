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
	// 为每个元音字母初始化其计数值
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch) {
		// 如果ch使元音字母，将其对应得计数值加1
		if (ch == 'a')
			++aCnt;
		else if (ch == 'e')
			++eCnt;
		else if (ch =='i')
			++iCnt;
		else if (ch == 'o')
			++oCnt;
		else if (ch == 'u')
			++uCnt;
	}
	// 输出结果
	cout << "Number of vowel a: \t" << aCnt << '\n'
		<< "Number of vowel e: \t" << eCnt << '\n'
		<< "Number of vowel i: \t" << iCnt << '\n'
		<< "Number of vowel o: \t" << oCnt << '\n'
		<< "Number of vowel u: \t" << uCnt << endl;
	system("pause");
	return 0;
}