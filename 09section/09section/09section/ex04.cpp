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
#include <list>
#include <array>
#include <deque>
#include <forward_list>
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
using std::iostream;
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
using std::list;
using std::deque;
using std::array;
using std::forward_list;

#pragma region capacity和size
void ex1()
{
	vector<int> ivec;
	// szie应该为0，capacity的值依赖于具体实现
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;
	// 向ivec添加24个元素
	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
		ivec.push_back(ix);

	// size应该为24；capacity应该大于等于24，具体值依赖于标准库实现
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	ivec.reserve(50);	// 将capacity至少设定为50，可能会更大
	// size应该为24；capacity应该大于等于50，具体值依赖于标准库实现
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	// 添加元素用光多余容量
	while (ivec.size() != ivec.capacity())
		ivec.push_back(0);
	// capacity应该未改变，size和capacity不相等
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	ivec.push_back(42);	// 再添加一个元素
	// size应该为51；capacity应该大于等于51，具体值依赖于标准库实现
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;

	ivec.shrink_to_fit();	// 要求归还内存
	// size应该未改变；capacity的值依赖于具体实现
	cout << "ivec: size: " << ivec.size()
		<< " capacity: " << ivec.capacity() << endl;
}
#pragma endregion

int main(void)
{
	ex1();

	system("pause");
	return 0;
}