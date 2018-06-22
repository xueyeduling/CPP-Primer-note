#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout; using std::endl;

template<class T>
void eliminate_duplicates(T &container)
{
	std::for_each(container.begin(), container.end(), [](auto v) {cout << v << " "; });
	cout << endl;
	std::sort(container.begin(), container.end());
	std::for_each(container.begin(), container.end(), [](auto v) {cout << v << " "; });
	cout << endl;
	auto end_unique = std::unique(container.begin(), container.end());
	std::for_each(container.begin(), container.end(), [](auto v) {cout << v << " "; });
	cout << endl;
	container.erase(end_unique, container.end());
	std::for_each(container.begin(), container.end(), [](auto v) {cout << v << " "; });
	cout << endl;
}

int main()
{
	std::vector<std::string> svec{ "aaa","bbb","ccc","aaa","bbb" };
	eliminate_duplicates(svec);

	std::vector<int> ivec{ 1,2,3,4,5,6,7,6,5,4,3,2,1,3,5 };
	eliminate_duplicates(ivec);

	system("pause");
	return 0;
}