#include <iostream>
#include <string>

using std::string;

class Screen
{
public:
	typedef string::size_type pos;
	using pos = string::size_type;
	Screen() = default;
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

int main()
{

	system("pause");
	return 0;
}