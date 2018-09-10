#include <iostream>
#include <string>
#include <vector>
#include <utility>

using std::string;
using std::pair;

int main(void)
{
    std::vector<pair<string, int>> pvec;

    int num;
    string str;
    while (std::cin >> str >> num)
    {
        pvec.push_back(make_pair(str, num));
    }

    for (pair<string, int> p : pvec)
    {
        std::cout << "int: " << p.first << "    str: " << p.second << std::endl;
    }

    system("pause");
    return 0;
}