#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i = 5;
	auto func = [&i]()->bool
	{
		if (i != 0)
			--i;
		return i == 0;
	};

	for (size_t i = 0; i != 10; ++i)
	{
		func();
	}
	cout << func() << endl;
	cout << i << endl;

	system("pause");
	return 0;
}