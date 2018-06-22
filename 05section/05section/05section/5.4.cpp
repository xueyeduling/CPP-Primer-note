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
	// a. 有问题啊，iter没有初始化就使用了

	//string s;
	//while (string::iterator iter!=s.end())
	//{
	//	/*...*/
	//}

	// 修复

	//string s;
	//string::iterator iter = s.begin();
	//while (iter++ != s.end())
	//{
	//	/*...*/
	//}

	// b. 有问题啊，status是在while()里面定义的，出了while就不能使用了啊

	//while(bool status=fine(word)){/*...*/ }
	//if(!status){/*...*/}

	// 修改
	bool status;
	while (status = fine(word)) {/*...*/ }
	if (!status) {/*...*/ }

	system("pause");
	return 0;
}