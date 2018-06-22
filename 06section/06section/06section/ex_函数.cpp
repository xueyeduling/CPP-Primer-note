#include "Chen_Yin.h"
#include "Chapter6.h"
void f1() { /* ...*/ } // 隐式地定义空形参列表
void f2() { /* ...*/ } // 显式地定义空形参列表
//int f3(int v1, v2) { /* ...*/ } // 错误
//int f4(int v1, int v2) { /* ...*/ } // 正确
void fun(int, int v) {}; // 个别在函数体内不会使用到的形参可以不命名

size_t count_calls()
{
	static size_t ctr = 0; // 调用结束后，这个值仍然有效
	return ++ctr;
}

void reset(int *ip)
{
	*ip = 0; // 改变指针ip所指对象的值
	ip = 0; // 只改变了ip的局部拷贝，实参未被改变
}

// 该函数接收一个int对象的引用，然后将对象的值置为0
void reset(int &i) // i是传给reset函数的对象的另一个名字
{
	i = 0; // 改变了i所引对象的值
}

void reset(const int &i)
{
	/* ...*/
}

// 比较两个string对象的长度
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // 第一次出现的为止(如果有的话)
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // 记录c第一次出现的位置
			++occurs; // 将出现的次数加1
		}
	}
	return ret; // 出现次数通过occurs隐式地返回
}

string::size_type find_char(string &s, char c, string::size_type &occurs)
{
	auto ret = s.size(); // 第一次出现的为止(如果有的话)
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // 记录c第一次出现的位置
			++occurs; // 将出现的次数加1
		}
	}
	return ret; // 出现次数通过occurs隐式地返回
}

// 尽管形式不同，但是这三个print函数是等价的
// 每个函数都有一个const int*类型的形参
void print(const int*);
void print(const int[]); // 可以看出来，函数的意图是作用于一个数组
void print(const int[10]); // 这里的维度表示我们期望数组含有多少元素，实际不一定

void print(const char *cp)
{
	if (cp) // 若cp不是一个空指针
		while (*cp) // 只要指针所指的字符不是空字符
			cout << *cp++; // 输出当前字符并将指针向前移动一个位置
}

void print(const int *beg, const int *end)
{
	// 输出beg到end之间(不含end)的所有元素
	while (beg != end)
		cout << *beg++ << endl; // 输出当前元素并将指针向前移动一个位置
}

// const int ia[]等价于const int* ia
// size表示数组的大小，将它显式地传给函数用于控制对ia元素地访问
void print(const int ia[], size_t size)
{
	for (size_t i = 0; i != size; ++i)
	{
		cout << ia[i] << endl;
	}
}

void print(int(&arr)[10])
{
	for (auto elem : arr)
		cout << elem << endl;
}

// matrix指向数组的首元素，该数组的元素是由10个整数构成的数组
void print(int(*matrix)[10], int rowSize) { /* ...*/ }

void error_msg(initializer_list<string> il)
{
	for (auto beg = il.begin(); beg != il.end(); ++beg)
		cout << *beg << " ";
	cout << endl;
}

void swap(int &v1, int &v2)
{
	// 如果两个值是相等的，则不需要交换，直接退出
	if (v1 == v2)
		return;
	// 如果程序执行到了这里，说明还需要继续完成某些功能
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	// 此处无须显示的return语句
}

//bool str_subrange(const string &str1, const string &str2)
//{
//	// 大小相同：此时用普通的相等性判断结果作为返回值
//	if (str1.size() == str2.size())
//		return str1 == str2; // 正确：==运算符返回布尔值
//	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
//	// 检查两个string对象的对应字符是否相等，以较短的字符串长度为限
//	for (decltype(size) i = 0; i != size; ++i)
//	{
//		if (str1[i] != str2[i])
//			return; // 错误 #1：没有返回值，编译器将报告这一错误
//	}
//	// 错误 #2：控制流可能尚未返回任何值就结束了函数的执行
//	// 编译器可能检查不出这一错误
//}

char &get_val(string &str, string::size_type ix)
{
	return str[ix];
}

// 计算val的阶乘，即1 * 2 * 3... * val
int factorial(int val)
{
	if (val > 1)
		return val*factorial(val - 1);
	return 1;
}

//typedef int arrT[10]; // arrT是一个类型别名，它表示的类型是含有10个整数的数组
//using arrT = int[10]; // 等价于上一行代码，参见60页
//arrT* func(int i); // func返回一个指向含有10个整数的数组的指针

//int *func2(int i);

//int(*func(int i))[10];
//int(&func2(int i))[10];
//auto func3(int i)->int(*)[10]
//{
//	cout << "func3" << endl;
//	static int arr[10] = {1,2,3,4,5};
//	return &arr;
//}

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
// 返回一个指针，该指针指向含有5个整数的数组
decltype(odd) *arrPty(int i)
{
	return (i % 2) ? &odd : &even; // 返回一个指向数组的指针
}

int main(int argc, char *argv[])
{
	/*int num;
	if (cin >> num) {
		int result = fact(num);
		cout << result << endl;
	}*/

	//fact("hello"); // 错误：实参类型不正确
	//fact(); // 错误：实参数量不足
	//fact(42, 10, 0); // 错误：实参数量过多
	//fact(3.14); // 正确：该实参能转换成int类型

	/*for (size_t i = 0; i != 10; ++i)
	cout << count_calls() << endl;*/

	//int i = 42;
	//reset(&i); // 改变i的值而非i的地址
	//cout << "i = " << i << endl; // 输出i = 0

	//int j = 42;
	//reset(j); // j采用传引用方式，它的值被改变
	//cout << "j = " << j << endl; // 输出j = 0

	/*int i = 2;
	switch (i)
	{
	case 1:
		int j;
		j= 10;
		break;
	case 2:
		j = 20;
		break;
	}*/

	//const int ci = 42; // 不能改变ci，const是顶层的
	//int i = ci; // 正确：当拷贝ci时，忽略了它的顶层const
	//int * const p = &i; // const是顶层的，不能给p赋值
	//*p = 0; // 正确：通过p改变对象的内容是允许的，现在i变成了0

	//int i = 42;
	//const int *cp = &i; // 正确：但是cp不能改变i
	//const int &r = i; // 正确：但是r不能改变i
	//const int &r2 = 42; // 正确
	//int *p = cp; // 错误：p的类型和cp的类型不匹配
	//int &r3 = r; // 错误：r3的类型和r的类型不匹配
	//int &r4 = 42; // 错误：不能用字面值初始化一个非常量引用

	//int i = 0;
	//const int ci = i;
	//string::size_type ctr = 0;
	//reset(&i); // 调用形参类型时int*的reset函数
	//reset(&ci); // 错误：不能用指向const int对象的指针初始化int *
	//reset(i); // 调用形参类型是int&的reset函数
	//reset(ci); // 错误：不能把普通引用绑定到const对象ci上
	//reset(42); // 错误：不能把普通应用绑定到字面值上
	//reset(ctr); // 错误：类型不匹配，ctr是无符号类型
	//// 正确，find_char的第一个形参是对常量的引用
	//find_char("Hello World!", 'o', ctr);

	/*const int &r = 10;
	const int i = 10;
	int j = 20;
	reset(i);
	const int *p = &j;
	reset(p);*/

	/*double i = 10.1;
	reset(i);*/

	//int i = 0, j[2] = { 0,1 };
	//print(&i); // 正确：&i的类型时int*
	//print(j); // 正确：j转换成int*并指向j[0]

	//int i = 0, j[2] = { 0,1 };
	//int k[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//print(&i); // 错误：实参不是含有10个整数的数组
	//print(j); // 错误：实参不是含有10个整数的数组
	//print(k); // 正确：实参是含有10个整数的数组

	//argv[0] = "prog"; // 或者argv[0]也可以指向一个空字符串
	//argv[1] = "-d";
	//argv[2] = "-o";
	//argv[3] = "ofile";
	//argv[4] = "data0";
	//argv[5] = 0;

	//initializer_list<string> ls;
	//initializer_list<int> li;

	//string expected = "";
	//string actual = "";
	//// expected和actual是string对象
	//if (expected != actual)
	//	error_msg({ "functionX", expected, actual });
	//else
	//	error_msg({ "functionX","okay" });

	/*if (expected != actual)
		error_msg(ErrCode(42), { "functionX", expected, actual });
	else
		error_msg(ErrCode(0), { "functionX","okay" });*/

		//string s("a value");
		//cout << s << endl; // 输出a value
		//get_val(s, 0) = 'A'; // 将s[0]的值改为A
		//cout << s << endl; // 输出A value

		//cout << factorial(5) << endl;

		/*int nums[] = { 1,2,3,4,5 };
		int(*p)[5] = &nums;*/

		//int arr[10]; // arr是一个含有10个整数的数组
		//int *p1[10]; // p1是一个含有10个指针的数组
		//int(*p2)[10] = &arr; // p2是一个指针，指向含有10个整数的数组

	system("pause");
	return 0;
}

//void error_msg(ErrCode e, initializer_list<string> il)
//{
//	cout << e.msg() << "：";
//	for (const auto &elem : il)
//		cout << elem << " ";
//	cout << endl;
//}

//vector<string> process()
//{
//	// ...
//	// expected和actual是string对象
//	if (expected.empty())
//		return {}; // 返回一个空vector对象
//	else if (expected == actual)
//		return { "functionX","okay" }; // 返回列表初始化的vector对象
//	else
//		return { "functionX",expected,actual };
//}

//int main()
//{
//	if (some_failure)
//		return EXIT_FAILURE; // 定义在cstdlib头文件中
//	else
//		return EXIT_SUCCESS; // 定义在cstdlib头文件中
//}