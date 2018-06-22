#include <string>
using std::string;

//不能：因为形参不是字面值类型

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	return 0;
}