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

int main()
{
	string file("8.10test.txt");
	vector<string> lines;

	ifstream ifile(file);
	if (!ifile)
	{
		cerr << "cannot open this file: " << file << endl;
		return EXIT_FAILURE;
	}
	string line;

	while (getline(ifile, line))
	{
		lines.push_back(line);
	}

	ifile.close();

	string word;
	istringstream iss;
	for (string var : lines)
	{
		iss.str(var);
		while (iss >> word)
			cout << word << " ";
		iss.clear();
		cout << endl;
	}

	system("pause");
	return 0;
}