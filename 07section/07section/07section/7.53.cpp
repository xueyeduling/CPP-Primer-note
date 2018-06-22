#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Debug
{
public:
	constexpr Debug(bool b = true) :hw(b), io(b), software(b), other(b) {}
	constexpr Debug(bool h, bool i, bool s, bool o) :
		hw(h), io(i), software(s), other(o) {}
	constexpr bool any() const { return hw || io || software || other; }
	void set_io(bool b) { io = b; }
	void set_hw(bool b) { hw = b; }
	void set_software(bool b) { software = b; }
	void set_other(bool b) { other = b; }
private:
	bool hw;
	bool io;
	bool software;
	bool other;
};

int main(void)
{


	system("pause");
	return 0;
}