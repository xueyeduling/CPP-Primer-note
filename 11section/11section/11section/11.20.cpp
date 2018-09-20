#include <iostream >
#include <map>
#include <string>

using namespace std;

// 用下标的更容易编些和理解，因为insert多了一个返回值，更加麻烦
int main(void)
{
    //// 统计每个单词在输入中出现的次数
    map<string, size_t> word_count;     // 从string到size_t的空map
    string word;
    while (cin >> word)
        ++word_count.insert({ word, 0 }).first->second;                 // 提取word的计数器并将其加1
    for (const auto &w : word_count)    // 对map中的每个元素
        // 打印结果
        cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << endl;

    return 0;
}