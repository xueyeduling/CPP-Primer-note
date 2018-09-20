#include <map>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    map<string, size_t> word_count;
    // 获得一个指向首元素的迭代器
    map<string, size_t>::const_iterator map_it = word_count.cbegin();
    // 比较当前迭代器和尾后迭代器
    while (map_it != word_count.cend()){
        // 解引用迭代器，打印关键字-值对
        cout << map_it->first << " occurs "
            << map_it->second << " times" << endl;
        ++map_it;       // 递增迭代器，移动到下一个元素
    }

    return 0;
}