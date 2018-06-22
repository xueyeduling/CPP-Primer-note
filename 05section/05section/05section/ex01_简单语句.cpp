//#include <iostream>
//#include <string>
//#include <vector>
//#include <cctype>//被包含在iostream中
//#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
//#include <iterator>//定义库函数begin和end
//#include <cstring>
//#include <stdexcept>
//#include "Sales_item.h"
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::vector;
//using std::begin;
//using std::end;
//using std::runtime_error;
//
//int main()
//{
//	//while (cin >> s&&s != sought)
//	//	; // 空语句
//
//	//while (int i = get_num())// 每次迭代时创建并初始化i
//	//	cout << i << endl;
//	//i = 0;// 错误：在循环外部无法访问i
//
//	// 寻找第一个负值元素
//	//auto beg = v.begin();
//	//while (beg != v.end() && *beg >= 0)
//	//	++beg;
//	//if (beg == v.end())
//	//	// 此时我们知道v中的所有元素都大于等于0
//
//	//const vector<string> scores = { "F","D","C","B","A","A++" };
//	//// 如果grade小于60，对应的字母是F;否则计算其下标
//	//string lettergrade;
//	//if (grade < 60)
//	//	lettergrade = scores[0];
//	//else
//	//	lettergrade = scores[(grade - 50) / 10];
//
//	//const vector<string> scores = { "F","D","C","B","A","A++" };
//	//// 如果grade小于60，对应的字母是F;否则计算其下标
//	//string lettergrade;
//	//if (grade < 60)
//	//	lettergrade = scores[0];
//	//else{
//	//	lettergrade = scores[(grade - 50) / 10];// 获取字母形式的成绩
//	//	if (grade != 100)// 只要不是A++，就考虑添加加号或减号
//	//		if (grade % 10 > 7)
//	//			lettergrade += '+';// 末尾是8或者9的成绩添加要给加号
//	//		else if (grade % 10 < 3)
//	//			lettergrade += '-';// 末尾是0、1或者2的成绩添加一个减号
//	//}
//
//	//// 错误：实际的执行过程并非像缩进格式显式的那样，else分支匹配的内层if语句
//	//if (grade % 10 >= 3)
//	//	if (grade % 10 > 7)
//	//		lettergrade += '+';// 末尾是8或者9的成绩添加要给加号
//	//else
//	//	lettergrade += '-';// 末尾是3、4、5、6或者7的成绩添加一个减号
//
//	//if (grade % 10 >= 3) {
//	//	if (grade % 10 > 7)
//	//		lettergrade += '+';// 末尾是8或者9的成绩添加要给加号
//	//}
//	//else
//	//	lettergrade += '-';// 末尾是3、4、5、6或者7的成绩添加一个减号
//
//	/*cout << (10 > 12 ? "3" : 10 > 2 ? "1" : "2");*/
//
//	// 为每个元音字母初始化其计数值
//	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//	//char ch;
//	//while (cin >> ch) {
//	//	// 如果ch使元音字母，将其对应得计数值加1
//	//	switch (ch) {
//	//	case 'a':
//	//		++aCnt;
//	//		break;
//	//	case 'e':
//	//		++eCnt;
//	//		break;
//	//	case 'i':
//	//		++iCnt;
//	//		break;
//	//	case 'o':
//	//		++oCnt;
//	//		break;
//	//	case 'u':
//	//		++uCnt;
//	//		break;
//	//	}
//	//}
//	//// 输出结果
//	//cout << "Number of vowel a: \t" << aCnt << '\n'
//	//	<< "Number of vowel e: \t" << eCnt << '\n'
//	//	<< "Number of vowel i: \t" << iCnt << '\n'
//	//	<< "Number of vowel o: \t" << oCnt << '\n'
//	//	<< "Number of vowel u: \t" << uCnt << endl;
//
//	//unsigned vowelCnt = 0;
//	//// ...
//	//switch (ch)
//	//{
//	//// 出现了a,e,i,o或u中的任意一个都会将vowelCnt的值加1
//	//case 'a':
//	//case 'e':
//	//case 'i':
//	//case 'o':
//	//case 'u':
//	//	++vowelCnt;
//	//	break;
//	//}
//
//	// 警告：不正确的程序逻辑！
//	//switch (ch)
//	//{
//	//	// 另一种合法的书写形式
//	//	case 'a': case 'e': case 'i': case 'o': case 'u':
//	//		++vowelCnt;
//	//		break;
//	//}
//
//	//switch (ch) {
//	//	case 'a':
//	//		++aCnt;// 此处应该有一条break语句
//	//	case 'e':
//	//		++eCnt;// 此处应该有一条break语句
//	//	case 'i':
//	//		++iCnt;// 此处应该有一条break语句
//	//	case 'o':
//	//		++ont;// 此处应该有一条break语句
//	//	case 'u':
//	//		++uCnt;
//	//}
//
//	// 如果ch是一个元音字母，将相应的计数值加1
//	/*switch (ch) {
//	case 'a': case 'e': case 'i': case 'o': case 'u':
//		++vowelCnt;
//		break;
//	default:
//		++otherCnt;
//		break;
//	}*/
//
//	//case true:
//	//	// 因为程序的执行流程可能绕开下面的初始化语句，所以该switch语句不合法
//	//	string file_name;// 错误：控制流绕过一个隐式初始化的变量
//	//	int ival = 0;// 错误：控制流绕过一个显式初始化的变量
//	//	int jval;// 正确：因为jval没有初始化
//	//	break;
//	//case false:
//	//	// 正确：jval虽然在作用域内，但是它没有被初始化
//	//	jval = next_num();// 正确：给jval赋一个值
//	//	if(file_name.empty())// file_name在作用内，但是没有初始化
//	//		// ...
//
//	//case true:
//	//{
//	//	// 正确：声明语句位于语句块内部
//	//	string file_name = get_file_name();
//	//	// ...
//	//}
//	//case false:
//	//	if(file_name.empty())// 错误：file_name不在作用域之内
//
//	//switch (int i = 10)
//	//{
//	//case 10:break;
//	//	}
//
//	//vector<int> v;
//	//int i;
//	//// 重复读入数据，直至到达文件末尾或者遇到其他输入问题
//	//while (cin >> i)
//	//	v.push_back(i);
//	//// 寻找第一个负值元素
//	//auto beg = v.begin();
//	//while (beg != v.end() && *beg >= 0)
//	//	++beg;
//	//if(beg==v.end())
//	//	// 此时我们直到v中所有元素都大于等于0
//
//	/*vector<int> v;
//	for (decltype(v.size) i = 0, sz = v.size(); i != sz; ++i)
//		v.push_back(v[i]);*/
//
//	//vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
//	////// 范围变量必须是引用类型，这样才能对元素执行写操作
//	////for (auto &r : v)// 对于v中的每一个元素
//	////	r *= 2;// 将v中每个元素的值翻倍
//
//	//for (auto beg = v.begin(),end=v.end(); beg != end; ++beg) {
//	//	auto &r = *beg;// r必须是引用类型，这样才能对元素执行写操作
//	//	r *= 2;// 将v中每个元素的值翻倍
//	//}
//
//	//for (auto r : v)
//	//	cout << r<<' ';
//	//cout << endl;
//
//	// 不断提示用户输入一对数，然后求其和
//	//string rsp;// 作为循环的条件，不能定义在do的内部
//	//do {
//	//	cout << "please enter two values: ";
//	//	int val1 = 0, val2 = 0;
//	//	cin >> val1 >> val2;
//	//	cout << "The sum of " << val1 << " and " << val2
//	//		<< " = " << val1 + val2 << "\n\n"
//	//		<< "More? Enter yes or no: ";
//	//	cin >> rsp;
//	//} while (!rsp.empty() && rsp[0] != 'n');
//
//	//do {
//	//	// ...
//	//	mumble(foo);
//	//} while (int foo = get_foo());// 错误：将变量声明放在了do的条件部分
//
//	//string buf;
//	//while (cin >> buf && !buf.empty()) {
//	//	switch (buf[0])
//	//	{
//	//	case '-':
//	//		// 处理到第一个空白为止
//	//		for (auto it = buf.begin() + 1; it != buf.end(); ++it){
//	//			if (*it == ' ')
//	//				break;// #1，离开for循环
//	//			//...
//	//		}
//	//		// break #1将控制权转移到这里
//	//		// 剩余的'-'处理：
//	//		break; // #2，离开switch语句
//	//	case '+':
//	//		// ...
//	//	} // 结束switch
//	//	// 结束switch:break #2将控制权转移到这里
//	//} // 结束while
//
//	//string buf;
//	//while (cin >> buf && !buf.empty()) {
//	//	if (buf[0] != '_')
//	//		continue;// 接着读取下一个输入
//	//	//程序执行过程到了这里？说明当前的输入是以下划线开始的；接着处理buf...
//	//}
//
//	//	// ...
//	//	goto end;
//	//	int ix = 10;// 错误：goto语句绕过了一个带初始化的变量定义
//	//end:
//	//	// 错误：此处的代码需要使用ix，但是goto语句绕过了它的声明
//	//	ix = 42;
//	//	cout << ix << endl;
//
//	// 向后跳过一个带初始化的变量定义是合法的
//	//begin:
//	//int sz = get_size();
//	//if (sz <= 0) {
//	//	goto begin;
//	//}
//
//	//Sales_item item1, item2;
//	//cin >> item1 >> item2;
//	//// 首先检查item1和item2是否表示同一种书籍
//	//if (item1.isbn() != item2.isbn()) {
//	//	throw runtime_error("Data must refer to same ISBN");
//	//}
//	//// 如果程序执行到了这里，表示两个ISBN是相同的
//	//cout << item1 + item2 << endl;
//
//	//Sales_item item1, item2;
//	//while (cin >> item1 >> item2) {
//	//	try {
//	//		// 执行添加两个Sales_item对象的代码
//	//		// 如果添加失败，代码抛出一个runtime_error异常
//	//		// 首先检查item1和item2是否表示同一种书籍
//	//		if (item1.isbn() != item2.isbn()) {
//	//			throw runtime_error("Data must refer to same ISBN");
//	//		}
//	//		cout << item1 + item2 << endl;
//	//	}
//	//	catch (runtime_error err)
//	//	{
//	//		// 提醒用户两个ISBN必须一致，询问是否重新输入
//	//		cout << err.what() << "\nTry Again? Enter y or n" << endl;
//	//		char c;
//	//		cin >> c;
//	//		if (!cin || c == 'n')
//	//			break;// 跳出while循环
//	//	}
//	//}
//
//	system("pause");
//	return 0;
//}