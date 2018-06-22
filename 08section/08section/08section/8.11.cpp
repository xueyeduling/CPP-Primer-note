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
#include <fstream>
#include <sstream>
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
using std::flush;
using std::ends;
using std::unitbuf;
using std::nounitbuf;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;

typedef string::size_type sz;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	// 逐行从输入读取数据，直至cin遇到文件尾(或其他错误)
	while (getline(cin, line)) {
		PersonInfo info;
		record.str(line); // 将记录绑定到刚读入的行
		record >> info.name;
		// 当line中的数据全部读出后，同样会触发"文件结束"信号，在record上的下一个输入操作会失败
		while (record >> word)
			info.phones.push_back(word);
		record.clear();
		people.push_back(info);
	}

	for (auto var : people)
	{
		cout << "name: " << endl << var.name << endl;
		cout << "tel: " << endl;
		for (auto tel : var.phones)
		{
			cout << tel << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}