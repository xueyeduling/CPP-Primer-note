#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main(void)
{
	std::vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 6, 1 };
	std::vector<int>::iterator beg = ivec.begin();
	std::vector<int>::iterator end = ivec.end();
	std::vector<int> ivec2;

	// 将old_val替换为new_val
	// replace(beg, end, old_val, new_val);
	std::replace(beg, end, 1, 11);

	// 将pred返回true的值替换为new_val
	// replace(beg, end, pred, new_val);
	std::replace_if(beg, end, [](int i){ return i % 2; }, 3);

	// beg和end所在的容器元素不变，将beg和end所在容器的old_val替换为new_val后，复制到dest所在的容器中
	// replace_copy(beg, end, dest, old_val, new_val);
	std::replace_copy(beg, end, std::back_inserter(ivec2), 3, 2);

	// beg和end所在的容器元素不变，将beg和end所在容器使pred返回true的元素替换为new_val后，复制到dest所在的容器中
	// replace_copy(beg, end, dest, pred, new_val);
	std::replace_copy_if(beg, end, std::back_inserter(ivec2), [](int i){ return i % 2; }, 6);

	return 0;
}