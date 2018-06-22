#include "Chen_Yin.h"
void fact(void)
{
	while (1) {
		cout << "Please enter a number:" << endl;
		int num;
		if (cin >> num) {
			int tmp = num;
			int result = 1;
			while (num > 1)
				result *= num--;
			cout << tmp << "! is " << result << endl;
		}
	}
}
int main()
{
	fact();
	return 0;
}