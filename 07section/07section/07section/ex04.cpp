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
typedef string::size_type sz;

class Screen {

	// storeOn的ostream版本能访问Screen对象的私有部分
	friend std::ostream& storeOn(std::ostream &, Screen &);
	// ...


	// Window_mgr的成员可以访问Screen类的私有部分
	friend class Window_mgr;

public:
	typedef std::string::size_type pos;

	// alternative way to declare a type member using a type alias
	// using pos = std::string::size_type;

	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}

	void some_member() const;

	Screen() = default;		// 因为Screen有另一个构造函数，所以本函数使必须的
							// cursor被其类内初始值初始化为0
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c) {}
	Screen(pos ht, pos wd) :height(ht), width(wd) {}
	char get() const	// 读取光标处的字符
	{
		return contents[cursor];	// 隐式内联
	}
	inline char get(pos ht, pos wd) const;	// 显式内联
	Screen &move(pos r, pos c);		// 能在之后被设为内联
private:
	void do_display(std::ostream &os) const
	{
		os << contents;
	}
	mutable size_t access_ctr = 0;	// 即使在一个const对象内也能被修改
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;	// 设置当前光标所在位置的新值
	return *this;			// 将this对象作为左值返回
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;	// 设置给定位置的新值
	return *this;					// 将this对象作为左值放回
}

void Screen::some_member() const
{
	++access_ctr;	// 保存一个计数值，用于记录成员函数被调用的次数
					// 该成员需要完成的其他工作
}

inline	// 可以在函数的定义处指定Inline
Screen &Screen::move(pos r, pos c)
{
	pos row = r*width;	// 计算行的位置
	cursor = row + c;	// 在行内将光标移动到指定的列
	return *this;		// 以左值的形式放回对象
}

char Screen::get(pos r, pos c) const	// 在类的内部声明成inline
{
	pos row = r*width;	// 计算行的位置
	return contents[row + c];	// 返回给定列的字符
}

class Window_mgr {
public:
	// 窗口中每个屏幕的编号
	using ScreenIndex = std::vector<Screen>::size_type;
	// 向窗口添加一个Screen，返回它的编号
	ScreenIndex addScreen(const Screen&);
	// 按照编号将指定的Screen重置为空白
	void clear(ScreenIndex);
private:
	// 这个Window_mgr追踪的Screen
	// 默认情况下，一个Window_mgr包含一个标准尺寸的空白Screen
	std::vector<Screen> screens{ Screen(24,80,' ') };
};

void Window_mgr::clear(ScreenIndex i)
{
	// s是一个Screen的引用，指向我们想要清空的那个屏幕
	Screen &s = screens[i];
	// 将那个选定的Screen重置为空白
	s.contents = string(s.height*s.width, ' ');
}
Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen& s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

int main()
{
	Screen::pos ht = 24, wd = 80;
	Screen scr(ht, wd, ' ');
	Screen *p = &scr;
	char c = scr.get();
	c = p->get();

	system("pause");
	return 0;
}

#pragma region 用于类成员声明的名字查找
//typedef double Money;
//string bal;
//class Account {
//public:
//	Money balance() { return bal; }
//private:
//	Money bal;
//	// ...
//};  
#pragma endregion

#pragma region 类名要特殊处理
//typedef double Money;
//class Account {
//public:
//	Money balance() { return bal; }	// 使用外层作用域的Money
//private:
//	typedef double Money;	// 错误：不能重新定义Mney
//	Money bal;
//	// ...
//};  
#pragma endregion

#pragma region 成员定义中的普通块作用域的名字查找
// 注意：这段代码仅为了说明而用，不是一段很好的代码
// 通常情况下不建议为参数和成员使用同样的名字
//int height;		// 定义了一个名字，稍后将在Screen中使用
//class Screen {
//public:
//	typedef std::string::size_type pos;
//	// 不建议的写法：成员函数中的名字不应该隐藏同名的成员
//	//void dummy_fcn(pos height) {
//	//	//cursor = width*height;	// 哪个height?是那个参数
//	//	cursor = width*this->height;	// 成员height
//	//	// 另外一个表示该成员的方式
//	//	cursor = width*Screen::height;
//	//}
//
//	// 建议的写法：不要把成员名字作为参数或其他局部变量使用
//	void dummy_fcn(pos ht)
//	{
//		cursor = width*height;	// 成员height
//	}
//private:
//	pos cursor = 0;
//	pos height = 0, width = 0;
//};
#pragma endregion

#pragma region 类作用域之后，在外围的作用域中查找
//void Screen::dummy_fcn(pos height) {
//	cursor = width*::height;	// 哪个height?是那个全局的
//}
#pragma endregion

#pragma region 在文件中名字的出现处对其进行解析
//int height;		// 定义了一个名字，稍后将在Screen中使用
//class Screen {
//public:
//	typedef std::string::size_type pos;
//	void setHeight(pos);
//	pos height = 0;	// 隐藏了外层作用域中的height
//};
//Screen::pos verify(Screen::pos);
//void Screen::setHeight(pos var) {
//	// var: 参数
//	// height: 类的成员
//	// verify: 全局函数
//	height = verify(var);
//}  
#pragma endregion
