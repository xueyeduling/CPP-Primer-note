#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>

using std::string;
using std::map;
using std::vector;
using std::pair;

int main(void)
{
    map<string, vector<pair<string, string>>> family;
    family["ËÕ"] = { { "Ğù", "1900.01.01" } };
    family["ËÕ"].push_back({ "Ó³³½", "1970.01.01" });
    family["ÁÖ"] = { { "ĞşÒô", "1900.01.01" } };

    for (const auto &var : family)
    {
        for (const auto &name_bir : var.second)
        {
            std::cout << var.first << " " << name_bir.first << " " << name_bir.second << std::endl;
        }
    }

    system("pause");
    return 0;
}