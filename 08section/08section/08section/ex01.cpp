#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // 定义main函数返回类型EXIT_FAILURE和EXIT_SUCCESS
#include <cassert> // 定义assert
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::string;
using std::vector;
using std::begin;
using std::end;
using std::runtime_error;
using std::exception;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::ofstream;
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;

typedef string::size_type sz;

void process_input(istream &istr)
{
	int ival;
	istr >> ival;
	cout << ival;
}

int main()
{
	//ofstream out1, out2;
	//out1 = out2;		// 错误：不能对流对象赋值
	//ofstream print(ofstream);	// 错误：不能初始化ofstream参数
	//out2 = print(out2);	// 错误：不能拷贝流对象

	//int ival;
	//cin >> ival;	// 当从标准输入上键入字母，文件结束标志等，读操作就会失败

	//while (cin >> ival)
	//	;

	//istream::badbit;


	// 记住cin的当前状态
	//auto old_state = cin.rdstate();	// 记住cin的当前状态
	//cin.clear();					// 使cin有效
	//process_input(cin);				// 使用cin
	//auto new_state = cin.rdstate();
	//cin.setstate(old_state);		// 将cin置为原有状态

	//cout << "hi!" << endl;	// 输出hi和一个换行，然后刷新缓冲区
	//cout << "hi!" << flush;	// 输出hi，然后刷新缓冲区，不附加任何额外字符
	//cout << "hi!" << ends;	// 输出hi和一个空字符，然后刷新缓冲区

	//cout << unitbuf;	// 所有输出操作后都会理解刷新缓冲区
	//// 任何输出都立即刷新，无缓冲
	//cout << nounitbuf;	// 回到正常的缓冲方式

	//cin.tie(&cout);	// 仅仅是用来展示：标准库将cin和cout关联在一起
	//// old_tie指向当前关联到cin的流(如果有的话)
	//ostream *old_tie = cin.tie(nullptr);// cin不再与其他流关联
	//// 将cin与cerr关联：这不是一个好主意，因为cin应该关联到cout
	//cin.tie(&cerr);	// 读取cin会刷新cerr而不是cout
	//cin.tie(old_tie);	// 重建cin和cout间的正常关联

	system("pause");
	return 0;
}