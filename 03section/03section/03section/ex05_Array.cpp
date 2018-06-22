#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t类型
#include <iterator>//定义begin和end函数
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//unsigned cnt = 42;// 不是常量表达式
	//constexpr unsigned sz = 42;// 常量表达式
	//int arr[10];//含有10个整数的数组
	//int *parr[sz];//含有42个整型指针的数组
	//string bad[cnt];//错误：cnt不是常量表达式
	//string strs[get_size()];//当get_size()是constexpr时正确，否则错误

	//const unsigned sz = 3;
	//int ial[sz] = { 0,1,2 };//含有3个元素的数组，元素值分别是0，1，2
	//int a2[] = { 0,1,2 };	//维度是3的数组
	//int a3[5] = { 0,1,2 };	//等价于a3[]={0,1,2,0,0}
	//string a4[3] = { "hi","bye" };//等价于a4[]={"hi","bye",""}
	//int a5[2] = { 0,1,2 };	//错误：初始值过多

	//char a1[] = { 'C','+','+' };//列表初始化，没有空字符
	//char a2[] = { 'c','+','+','\0' };//列表初始化，含有显式的空字符
	//char a3[] = "c++";//自动添加表示字符串结束的空字符
	//const char a4[6] = "Daniel";//错误：没有空间可存放空字符

	//int *ptrs[10];	//ptrs是含有10个整型指针的数组
	//int &refs[10] =/*?*/;//错误：不存在引用的数组
	//int(*Parray[10]) = &arr;//Parray指向一个含有10个整数的数组
	//int(&arrRef)[10] = arr;//arrRef引用一个含有10个整数的数组

	/*unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}*/

	//int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	//auto ia2(ia);//ia2是一个整型指针，指向ia的第一个元素
	//ia2 = 42;//错误：ia2是一个指针，不能用int值给指针赋值

	//// ia3是一个含有10个整数的数组
	//decltype(ia) ia3 = { 0,1,2,3,4,5,6,7,8,9 };
	//ia3 = p;	//错误：不能整型指针给数组赋值
	//ia[4] = i;	//正确：把i的值赋给ia3的一个元素

	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int *e = &arr[10];	//指向arr尾元素的下一位置的指针

	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int *e = &arr[10];// 指向arr尾元素的下一位置的指针
	//for (int *b = arr; b != e; ++b)
	//	cout << *b << endl;	// 输出arr的元素

	//int ia[] = { 0,1,2,3,4,5,6,7,8,9 };// ia是一个含有10个整数的数组
	//int *beg = begin(ia);// 指向ia首元素的指针
	//int *last = end(ia);// 指向ia尾元素的下一位置的指针

	/*int *pbeg = begin(arr), *pend = end(arr);
	while (pbeg != pend&&*pbeg >= 0)
		++pbeg;*/

	/*int i = 0, sz = 42;
	int *p = &i, *e = &sz;
	cout << p - e;*/

	//constexpr size_t sz = 5;
	//int arr[sz] = { 1,2,3,4,5 };
	//int *ip = arr;
	//int *ip2 = ip + 4;

	//int *p = arr + sz;
	//int *p2 = arr + 10;

	//auto n = end(arr) - begin(arr);	//n的值为arr中元素的数量
	//int *b = arr, *e = arr + sz;
	//while (b < e) {
	//	//使用*b
	//	++b;
	//}

	//int i = 0, sz = 42;
	//int *p = &i, *e = &sz;
	////未定义的：p和e无关，因此比较毫无意义！
	//while(p<e)

	//int ia[] = { 0,2,4,6,8 };
	//int i = ia[2];//ia转换成指向数组首元素的指针
	//			  //ia[2]得到(ia+2)所指的元素
	//int *p = ia;//p指向ia的首元素
	//i = *(p + 2);//等价于i=ia[2]

	//p = &ia[2];
	//int j = p[1];//等于a[3]
	//int k = p[-2];//等于a[0]

	//char ca[] = { 'C','+','+' };
	//cout << strlen(ca) << endl;//严重错误，ca没有以空字符结束

	//string s("Hello World");
	////char *str = s;//错误
	//const char *str = s.c_str();//正确
	//cout << str << endl;
	//s = "xixi";
	//cout << str << endl;

	int int_arr[] = { 0,1,2,3,4,5 };
	// ivec有6个元素，分别是int_arr中对应元素的副本
	vector<int> ivec(begin(int_arr), end(int_arr));
	// 拷贝三个元素：int_arr[1]、int_arr[2]、int_arr[3]
	vector<int> subVec(int_arr + 1, int_arr + 4);
	system("pause");
	return 0;
}