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
#pragma region string
	/*string s1, s2;
cin >> s1 >> s2;
if (s1 == s2)
	cout << "s1=s2" << endl;
else
	cout << "s1!=s2" << endl;*/
#pragma endregion

#pragma region C风格字符串
	char cstr1[100];
	char cstr2[100];
	scanf("%s %s", cstr1, cstr2);
	if (strcmp(cstr1, cstr2) == 0)
		cout << "cstr1=cstr2" << endl;
	else
		cout << "cstr1!=cstr2" << endl;
#pragma endregion


	system("pause");
	return 0;
}