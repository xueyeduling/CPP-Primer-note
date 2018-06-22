#include <iostream>
int main()
{
	int ival = 1024;
	int &refVal = ival;	// refVal指向ival(是ival的另一个名字)
						//int &refVal2;	// 报错：引用必须被初始化
	refVal = 2;	// 把2赋给refVal所指向的对象，此处即是赋给了ival
	int ii = refVal;	// 与ii=ival执行结果一样
						// 正确，refVal3绑定到了那个与refVal绑定的对象上，这里就是绑定到ival上
	int &refVal3 = refVal;
	// 利用与refVal绑定的对象的值初始化变量i
	//int i = refVal;	// 正确：i被初始化为ival的值

	int i = 1024, i2 = 2048;	// i和i2都是int
	int &r = i, r2 = i2;		// r是一个引用，与i绑定在一起，r2是int
	int i3 = 1024, &ri = i3;	// i3是int,ri是一个引用，与i3绑定在一起
	int &r3 = i3, &r4 = i2;		// r3和r4都是引用

								//int &refVal3 = 10;	// 错误：引用类型的初始值必须是一个对象
	double dval = 3.14;
	int refVal5 = dval;	// 错误：此处引用类型的初始值必须是int型对象
	system("pause");
	return 0;
}