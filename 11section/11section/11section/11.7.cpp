#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::string;
using std::map;
using std::vector;

int main(void)
{
    map<string, vector<string>> family;
    family["ËÕ"] = { ("Ğù") };
    family["ËÕ"].push_back("Ó³³½");
    family["ÁÖ"] = { ("ĞşÒô") };

    for (const auto &var : family)
    {
        for (const auto &name : var.second)
        {
            std::cout << var.first << " " << name << std::endl;
        }
    }

    system("pause");
    return 0;
}