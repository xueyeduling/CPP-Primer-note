#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iterator>
#include <cstddef>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//int ia[3][4];// 大小为3的数组，每个元素是含有4个整数的数组
	// 大小为10的数组，它的每个元素都是大小为20的数组
	// 这些数组的元素是含有30个整数的数组
	//int arr[10][20][30] = { 0 };//将所有元素初始化为0

	/*int ia[3][4] = { {0},{4},{8} };
	int ix[3][4] = { 0,3,6,9 };*/

	// 用arr的首元素为ia最后一行的最后一个元素赋值
	//ia[2][3] = arr[0][0][0];
	//int(&row)[4] = ia[1];// 把row绑定到ia的第二个4元素数组上

	//constexpr size_t rowCnt = 3, colCnt = 4;
	//int ia[rowCnt][colCnt];//12个未初始化的元素
	//// 对于每一行
	//for (size_t i = 0; i != rowCnt; i++)
	//{
	//	// 对于行内的每一列
	//	for (size_t j = 0; j != colCnt; j++)
	//	{
	//		// 将元素的位置索引作为它的值
	//		ia[i][j] = i*colCnt + j;
	//	}
	//}

	//constexpr size_t rowCnt = 3, colCnt = 4;
	//int ia[rowCnt][colCnt];//12个未初始化的元素
	//size_t cnt = 0;
	//for(auto &row:ia)
	//	for (auto &col : row) {
	//		col = cnt;
	//		++cnt;
	//	}

	//for (size_t i = 0; i < rowCnt; i++)
	//{
	//	cout << ia[i][0] << endl;
	//}

	/*for (const auto &row : ia)
		for (auto col : row)
			cout << col << endl;*/

	int ia[3][4];//大小为3的数组，每个元素是含有4个整数的数组
	//int(*p)[4] = ia;//p指向含有4个整数的数组
	//p = &ia[2];//p指向ia的尾元素

	// 输出ia中每个元素的值，每个内层数组各占一行
	// p指向含有4个整数的数组
	//for (auto p = ia; p != ia + 3; p++) {
	//	// q指向4个整数数组的首元素，也就是说，q指向一个整数
	//	for (auto q = *p; q != *p + 4; q++)
	//		cout << *q << ' ';
	//	cout << endl;
	//}

	// p指向ia的第一个数组
	//for (auto p = begin(ia); p != end(ia); p++) {
	//	// q指向内层数组的首元素
	//	for (auto q = begin(*p); q != end(*p) ; q++)
	//		cout << *q << ' ';// 输出q所指的整数值
	//	cout << endl;
	//}

	//using int_array = int[4];
	//typedef int int_array[4];

	//for (int_array *p = ia; p != ia + 3; ++p)
	//{
	//	for (int *q = *p; q != *p + 4; ++q)
	//		cout << *q << ' ';
	//	cout << endl;
	//}

	system("pause");
	return 0;
}