#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

char next_text();
unsigned some_value();
int get_value();
int get_num();
unsigned get_bufCnt();
int main()
{
	srand((unsigned int)time(NULL));
	//a. case标签和default标签没有break;

	/*unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
	char ch = next_text();
	switch (ch) {
	case 'a':aCnt++;
	case 'e':eCnt++;
	default:iouCnt++;
	}*/

	//修改：

	//unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
	//char ch = next_text();
	//switch (ch) {
	//case 'a':aCnt++; break;
	//case 'e':eCnt++; break;
	//default:iouCnt++; break;
	//}

	//b. ix定义并初始化在case 1部分中

	/*vector<int> ivec = { 1,2,3,4,5 };
	unsigned index = some_value();
	switch (index) {
	case 1:
		int ix = get_value();
		ivec[ix] = index;
		break;
	default:
		ix = ivec.size() - 1;
		ivec[ix] = index;
	}*/

	//修改：

	//vector<int> ivec = { 1,2,3,4,5 };
	//unsigned index = some_value();
	//switch (index) {
	//	//int ix;
	//case 1:
	//	int ix;//没有初始化
	//	ix = get_value();
	//	ivec[ix] = index;
	//	break;
	//default:
	//	ix = ivec.size() - 1;
	//	ivec[ix] = index;
	//}

	//c. case标签必须是整型常量表达式

	/*unsigned evenCnt = 0, oddCnt = 0;
	int digit = get_num() % 10;
	switch (digit) {
	case 1,3,5,7,9:
		oddCnt++;
		break;
	case 2,4,6,8,10:
		evenCnt++;
		break;
	}*/

	// 修改：

	/*unsigned evenCnt = 0, oddCnt = 0;
	int digit = get_num() % 10;
	switch (digit) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		oddCnt++;
		break;
	case 2:
	case 4:
	case 6:
	case 8:
	case 10:
		evenCnt++;
		break;
	}*/

	//d. case标签只能是整型常量

	/*unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch (swt)
	{
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = ival * sizeof(int);
		break;
	case kval:
		bufsize = ival * sizeof(int);
		break;
	}*/

	// 修改

	/*const unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned bufsize;
	unsigned swt = get_bufCnt();
	switch (swt)
	{
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = ival * sizeof(int);
		break;
	case kval:
		bufsize = ival * sizeof(int);
		break;
	}*/

	system("pause");
	return 0;
}

char next_text()
{
	return rand() % 26 + 'a';
}
unsigned some_value()
{
	return rand() % 5;
}
int get_value()
{
	return rand() % 5;
}
int get_num()
{
	return rand();
}
unsigned get_bufCnt()
{
	int nums[] = { 512.1024,4096 };
	return nums[rand() % 3];
}