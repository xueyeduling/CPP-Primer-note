#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	//string s1 = "hello", s2 = "world";
	//string s3 = s1 + ", " + s2 + '\n';

	//string s4 = s1 + ",";// 正确：把一个string对象和一个字面值相加
	////string s5 = "hello" + ",";//错误：两个运算对象都不是string
	////正确：每个加法运算符都有一个运算对象是string
	//string s6 = s1 + "," + "world";
	////string s7 = "hello" + "," + s2;//错误：不能把字面值直接相加

	//string str("some string");
	////每行输出str中的一个字符
	//for (auto c : str)//对于str中的每个字符
	//	cout << c << endl;//输出当前字符，后面紧跟一个换行符

	//string s("Hello World!!!");
	//// punct_cnt的类型和s.size的返回类型一样
	//decltype(s.size()) punct_cnt = 0;
	//// 统计s中标点符号的数量
	//for (auto c : s)	//对于s中的每个字符
	//	if (ispunct(c))	//如果该字符是标点符号
	//		++punct_cnt;
	//cout << punct_cnt
	//	<< " punctuation characters in " << s << endl;

	//string s("Hello World!!!");
	//转换成大写形式
	//for (auto &c : s)	//对于s中的每个字符(注意：c是引用)
	//	c = toupper(c);	//c是一个引用，因此赋值语句将改变s中字符的值
	//cout << s << endl;

	//string s("some string");
	//if (!s.empty())
	//	s[0] = toupper(s[0]);

	////依次处理s中的字符直至我们处理完全部字符或者遇到一个空白
	//for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
	//	s[index] = toupper(s[index]);//将当前字符改为大写形式
	//cout << s << endl;

	//const string hexdigits = "0123456789ABCDEF";//可能的十六进制数字
	//cout << "Enter a series of numbers between 0 and 15"
	//	<< " separated by spaces. Hit ENTER when finished: "
	//	<< endl;
	//string result;//用于保存十六进制的字符串
	//string::size_type n;
	//while (cin >> n)
	//	if (n < hexdigits.size())
	//		result += hexdigits[n];//得到对应的十六进制数字
	//cout << "Your hex number is: " << result << endl;
	system("pause");
	return 0;
}