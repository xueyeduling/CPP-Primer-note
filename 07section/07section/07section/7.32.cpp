#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen;

class Window_mgr {
public:
	// 窗口中每个屏幕的编号
	using ScreenIndex = std::vector<Screen>::size_type;
	// 按照编号将指定的Screen重置为空白
	void clear(ScreenIndex);

	Window_mgr();

	void show();

private:
	// 这个Window_mgr追踪的Screen
	// 默认情况下，一个Window_mgr包含一个标准尺寸的空白Screen
	std::vector<Screen> screens;
};

class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	typedef std::string::size_type pos;

	Screen &set(char);
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

void Window_mgr::clear(ScreenIndex i)
{
	// s是一个Screen的引用，指向我们想要清空的那个屏幕
	Screen &s = screens[i];
	// 将那个选定的Screen重置为空白
	s.contents = string(s.height*s.width, ' ');
}

Window_mgr::Window_mgr()
{
	screens = { Screen(24,80,'a') };
}

void Window_mgr::show()
{
	for (auto& i : screens)
	{
		i.display(cout);
		cout << endl;
	}
}

int main()
{
	/*Window_mgr win1;
	win1.show();
	win1.clear(0);
	win1.show();*/

	/*Screen screen1;
	screen1.set('a');
	screen1.display(cout);*/

	system("pause");
	return 0;
}