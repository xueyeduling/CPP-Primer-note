#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	//for循环更好一点，结构更加清晰，定义的索引为临时变量，方便回收
	string s;
	cout << "Enter a string: \n";
	getline(cin, s);
#pragma region while循环
	/*decltype(s.size()) i = 0;
while(i<s.size())
	s[i++] = 'X';*/
#pragma endregion
#pragma region for循环
	//for (size_t i = 0; i < s.size(); i++)
//{
//	s[i] = 'X';
//}  
#pragma endregion

	cout << s << endl;
	system("pause");
	return 0;
}