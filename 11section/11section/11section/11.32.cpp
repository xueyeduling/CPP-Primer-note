#include <map>
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void)
{
    // 错误的写法
   /*multimap<string, string> authors1{
        { "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
    };
    for each (pair<string, string> var in authors1)
    {
        cout << var.first << ": " << var.second << endl;
    }*/

    // 正确的写法，使用multiset来排序作品
    std::multimap<string, string> authors{
        { "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
    };
    map<string, multiset<string>> order_authors;
    for (const auto &author : authors)
        order_authors[author.first].insert(author.second);
    for (const auto &author : order_authors) {
        std::cout << author.first << ": ";
        for (const auto &work : author.second)
            std::cout << work << " ";
        std::cout << std::endl;
    }


    system("pause");
    return 0;
}