#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

/*
使用set不用自己判断单词是否已经在容器中了
*/
int main(void)
{
    vector<string> words;
    string word;
    while (std::cin >> word)
    if (find(words.begin(), words.end(), word) == words.end())
        words.push_back(word);

    for (const auto &w : words)
    {
        std::cout << w << std::endl;
    }

    system("pause");
    return 0;
}