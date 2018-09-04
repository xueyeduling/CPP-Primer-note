#include <iostream>
#include <string>
#include <map>
#include <set>

int main()
{
    std::map<std::string, std::size_t> words_count;
    std::set<std::string> exclude = { "The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a" };
    std::string word;

    while (std::cin >> word)
    {
        tolower(word[0]);
        if (ispunct(*(--word.end())))
        {
            word.resize(word.size() - 1);
        }
        if (exclude.find(word) == exclude.end())
            ++words_count[word];
    }

    for (const auto &w : words_count)
        std::cout << w.first << " occurs " << w.second
        << ((w.second > 1) ? " times" : " times") << std::endl;

    system("pause");
    return 0;
}