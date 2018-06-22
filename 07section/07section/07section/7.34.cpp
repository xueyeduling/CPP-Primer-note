// 会报错，因为在dummy_fcn的声明(包括返回类型和参数列表中使用的名字)和private中成员的声明时
// 并没有定义pos;

#include <iostream>

// 注意：这段代码仅为了说明而用，不是一段很好的代码
// 通常情况下不建议为参数和成员使用同样的名字
int height;		// 定义了一个名字，稍后将在Screen中使用
class Screen {
public:
	void dummy_fcn(pos height) {
		cursor = width*height;	// 哪个height?是那个参数
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	typedef std::string::size_type pos;
};

int main()
{
	return 0;
}