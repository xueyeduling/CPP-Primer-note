#include <vector>
#include <map>

int main(void)
{
    std::map<int, std::vector<int>> i_iv_map;
    std::map<int, std::vector<int>>::mapped_type mt;        // vector<int>
    std::map<int, std::vector<int>>::key_type kt;           // int
    std::map<int, std::vector<int>>::value_type vt;         // pair<const int, vector<int>>

    return 0;
}