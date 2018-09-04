#include <iostream>
#include <string>
#include <map>
#include <set>

int main()
{
    std::map<std::string, std::size_t> words_count;
    std::set<std::string> exclude = { "这", "那", "一", "的" };
    std::string word;

    while (std::cin >> word)
        if (exclude.find(word) == exclude.end())
            ++words_count[word];

    for (const auto &var : words_count)
        std::cout << var.first << "出现了" << var.second << "次" << std::endl;

    system("pause");
    return 0;
}