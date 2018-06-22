#include <iostream>
#include <string>
#include <vector>
#include <cctype>//被包含在iostream中
#include <cstddef>//定义数组下标size_t和指针相减ptrdiff_t类型
#include <iterator>//定义库函数begin和end
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;

int main()
{
	//int i = 1024;
	//int k = -i;		// k是-1024
	//bool b = true;
	//bool b2 = -b;	// b2是true

	//cout << k << " " << b2 << endl;

	//short short_value = 32767; // 如果short类型占16位，则能表示的最大值时32767
	//short_value += 1;	// 该计算导致溢出
	//cout << "short_value：" << short_value << endl;

	//int ival1 = 21 / 6;// ival1是3，结果惊醒了删节，余数被抛弃掉了
	//int ival2 = 21 / 7;// ival2是3，没有余数，结果是整数值
	//cout << ival1 << " " << ival2 << endl;

	//int ival = 42;
	//double dval = 3.14;
	//ival % 12;// 正确：结果是6
	//ival%dval;// 错误：运算对象是浮点类型

	/*int m = 10;
	int n = -3;
	cout << m / n << endl;
	cout << m%n << endl;*/

	//21 % 6;// 结果是3
	//21 % 7;// 结果是0
	//-21 % -8;// 结果是-5
	//21 % -5;// 结果是1
	//21 / 6;// 结果是3
	//21 / 7;// 结果是3
	//-21 / -8;//结果是2
	//21 / -5;//结果是-4

	//cout << 21 % 6 << ' ' << 21 % 7 << ' ' << -21 % -8 << ' '
	//	<< 21 % -5 << ' ' << 21 / 6 << ' ' << 21 / 7 << ' '
	//	<< -21 / -8 << ' ' << 21 / -5 << endl;

	//vector<string> text = { "haha","xixi.","hehe","","wakakaka" };
	//// s是对常量的引用；元素既没有被拷贝也不会被改变
	//for (const auto &s : text) {// 对于test的每个元素
	//	cout << s;// 输出当前元素
	//	// 遇到空字符串或者以句号结束的字符串进行换行
	//	if (s.empty() || s[s.size() - 1] == '.')
	//		cout << endl;
	//	else
	//		cout << " ";
	//}

	/*if (!vec.empty())
		cout << vec[0];*/

	//if (i < j < k)// 若k大于1则恒为真
	//if ( i < j && j < k )// 当i小于j并且j小于k时条件为真

	/*vector<int> ivec(10);
	for (int i : ivec)
		cout << i << endl;*/

	//k = { 3.14 };// 错误：窄化转换
	//vector<int> vi;// 初始为空
	//vi = { 0,1,2,3,4,5,6,7,8,9 };// vi现在含有10个元素了，值从0到9

	//int ival, jval;
	//ival = jval = 0;//正确：都被赋值为0

	//int ival, *pval;
	//ival = pval = 0;// 错误：不能把指针的值赋给int
	//string s1, s2;
	//s1 = s2 = "OK";

	//int i;
	//// 更好的写法：条件部分表达得更加清晰
	//while ((i = get_value()) != 42) {
	//	// 其它处理......
	//}

	//auto pbeg = v.begin();
	//// 输出元素直至遇到第一个负值为止
	//while (pbeg != v.end() && *pbeg >= 0)
	//	cout << *pbeg++ << endl;//输出

	//while (beg != s.end() && !isspace(*beg))
	//	*beg = toupper(*beg++);// 错误：该赋值语句未定义

	/*typedef struct {
		int age;
		int sorce;
	} stu;
	const stu s1 = { 20,20 };
	stu s2 = { 30,30 };
	(&s1)->age;*/

	//string s1 = "a string", *p = &s1;
	//auto n = s1.size();//运行string对象s1的size成员
	//n = (*p).size();//运行p所指对象的size成员
	//n = p->size();//等价与(*p).size()

	/*finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";*/

	//cout << ((grade < 60) ? "fail" : "pass");//输出pass或者fail
	//cout << (gread < 60) ? "fail" : "pass";//输出1或者0
	//cout << grad < 60 ? "fail" : "pass";//错误：试图比较cout和60

	//cout << 42 + 10;// 正确：+的优先级更高，因此输出求和的结果
	//cout << (10 < 42);// 正确：括号使运算对象按照我们的期望结合在一起，输出1
	//cout << 10 < 42;// 错误：试图比较cout和42！

	/*vector<int> ivec{ 1,2,3,4,5,6,7,8,9 };
	string s1 = "1234567890";
	cout << sizeof(s1) << endl;
	int n;
	int ns[n];*/

	//Sales_data data, *p;
	//sizeof(Sales_data);//存储Sales_data类型的对象所占空间大小
	//sizeof data;//data的类型大小，即sizeof(Sales_data)
	//sizeof p;//指针所占的空间大小
	//sizeof *p;//p所指类型的空间大小，即sizeof(Sales_data)
	//sizeof data.revenue;//Sales_data的revenue成员对应类型的大小
	//sizeof Sales_data::revenue;//另一种获取revenue大小的方式

	/*int i = 10, &r=i;
	int j = 20;
	r = j;*/

	// sizeof(ia)/sizeof(*ia)返回ia的元素数量
	//constexpr size_t = sizeof(ia) / sizeof(*ia);
	//int arr2[sz];//正确：sizeof返回一个常量表达式

	//vector<int> ivec = { 1,2,3,4,5 };
	//vector<int>::size_type cnt = ivec.size();
	//// 将把从size到1的值赋给ivec的元素
	//for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix,--cnt)
	//	ivec[ix] = cnt;
	//for (size_t i = 0; i < ivec.size(); i++)
	//{
	//	cout << ivec[i] << endl;
	//}

	//bool flag; char cval;
	//short sval; unsigned short usval;
	//int ival; unsigned int uival;
	//long lval; unsigned long ulval;
	//float fval; double dval;

	//3.14159L + 'a';// 'a'提升成int，然后该int值转换成long double
	//dval + ival;// ival转换成double
	//dval + fval;// fval转换成double
	//ival = dval;// dval(切除小数部分后)转换成int
	//flag = dval;// 如果dval是0，则flag是false，否则flag是true
	//cval + fval;// cval提升成int，然后该int值转换成float
	//sval + cval;// sval和cval都会提升为int
	//cval + lval;// cval转换为long
	//ival + ulval;// ival转换为unsigned long
	//usval + ival;// 根据unsigned short和int所占空间的大小进行提升
	//uival + lval;// 根据unsigned int和long所占空间的大小进行转换

	/*int i[] = { 1,2,3,4,5 };
	int (&r)[5] = i;*/

	//int i;
	//const int &j = i;// 非常量转换成const int的引用
	//const int *p = &i;// 非常量的地址转换成const的地址
	//int &r = j, *q = p;// 错误：不允许const转换成非常量

	//const char *cp;
	//// 错误：static_cast不能转换掉const性质
	//char *q = static_cast<char*>(cp);
	//static_cast<string>(cp);// 正确：字符串字面值转换成string类型
	//const_cast<string>(cp);// 错误：const_cast只能改变常量属性

	int i = 10;
	//i++ = 20;
	cout << i << endl;
	++i = 20;
	cout << i << endl;
	
	system("pause");
	return 0;
}