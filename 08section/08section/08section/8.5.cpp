#include <iostream>
#include <string>
#include <vector>
#include <cctype>//��������iostream��
#include <cstddef>//���������±�size_t��ָ�����ptrdiff_t����
#include <iterator>//����⺯��begin��end
#include <cstring>
#include <stdexcept>
#include <exception>
#include <initializer_list>
#include <cstdlib> // ����main������������EXIT_FAILURE��EXIT_SUCCESS
#include <cassert> // ����assert
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

typedef string::size_type sz;

vector<string> Func(string file)
{
	ifstream fin(file);
	vector<string> vec;
	if (fin.is_open())
	{
		string tmp;
		while (fin >> tmp)
		{
			vec.push_back(tmp);
		}
	}
	return vec;
}

int main()
{
	vector<string> vec = Func("8.4test.txt");
	for (auto str : vec)
	{
		cout << str << endl;
	}

	system("pause");
	return 0;
}