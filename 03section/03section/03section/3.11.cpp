#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//合法 c的类型时const char &
	const string s = "Keep out!";
	for (auto &c : s)
	{
		/*...*/
	}
	system("pause");
	return 0;
}