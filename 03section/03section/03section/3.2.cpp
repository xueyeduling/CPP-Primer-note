#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//string line;
	//// 每次读入一整行，直至到达文件末尾
	//getline(cin, line);
	//if (!line.empty())
	//	cout << line;

	string word;
	// 每次读入一个单词，空格或换行结尾
	cin >> word;
	if (!word.empty())
		cout << word << endl;
	system("pause");
	return 0;
}