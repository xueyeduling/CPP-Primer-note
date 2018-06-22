#include <iostream>
#include <string>

using std::string;

class Screen
{
public:
	typedef string::size_type pos;
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wt) :
		height(ht), width(wt), contents(ht*wt, ' ') {}
	Screen(pos ht, pos wt, string str) :
		height(ht), width(wt), contents{ str } {}
	Screen(pos ht, pos wt, char c) :
		height(ht), width(wt), contents(ht*wt, c) {}
	char get()
	{
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;	// 显式内联
	Screen &move(pos r, pos c);		// 能在之后被设为内联
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

char Screen::get(pos ht, pos wd) const
{
	return contents[ht*width + wd];
}

Screen &Screen::move(pos r, pos c)
{
	cursor = r*width + c;
	return *this;
}

// Screen能安全地因爱于拷贝和赋值操作的默认版本，
// 因为使用Vector和string管理动态内存
// 类包含vector或者string成员，则其拷贝、赋值和销毁的合成版本能够正常工作

int main()
{
	Screen sc1(10, 10, ' ');
	Screen sc2 = sc1;	// 拷贝
	Screen sc3;
	sc3 = sc1;			// 赋值
	system("pause");
	return 0;
}