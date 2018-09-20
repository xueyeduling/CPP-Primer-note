#include <map>

int main(void)
{
    std::map<int, int> iimap{ { 1, 10 }, { 2, 20 } };

    for (std::map<int, int>::iterator iter = iimap.begin(); iter != iimap.end(); ++iter)
    {
        iter->second = 50;
    }

    return 0;
}