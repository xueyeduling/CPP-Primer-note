#include <iostream>
#include <string>

using std::string;
using std::cout;

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
	Screen move(pos r, pos c);		// 能在之后被设为内联
	Screen set(char c);
	Screen set(pos r, pos c, char ch);

	Screen display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}

	const Screen display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}
private:
	void do_display(std::ostream &os) const
	{
		os << contents;
	}
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
};

char Screen::get(pos ht, pos wd) const
{
	return contents[ht*width + wd];
}

Screen Screen::move(pos r, pos c)
{
	cursor = r*width + c;
	return *this;
}

Screen Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

Screen Screen::set(pos r, pos c, char ch)
{
	pos tmp = r*width + c;
	contents[cursor] = ch;
	return *this;
}

int main()
{
	Screen myScrren(5, 5, 'X');
	myScrren.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScrren.display(cout);
	cout << "\n";

	system("pause");
	return 0;
}