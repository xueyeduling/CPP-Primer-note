#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::string;
using std::multimap;
using std::vector;

int main(void)
{
    multimap<string, string> family;
    family.insert({ "ËÕ", "Ğù" });
    family.insert({ "ËÕ", "Ó³³½" });
    family.insert({ "ÁÖ", "ĞşÒô" });

    for (const auto &var : family)
    {
        std::cout << var.first << " " << var.second << std::endl;
    }

    system("pause");
    return 0;
}