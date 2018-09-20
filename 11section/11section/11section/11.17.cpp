#include <set>
#include <vector>
#include<iterator>

int main(void)
{
    std::multiset<std::string> c;
    std::vector<std::string> v;

    copy(v.begin(), v.end(), inserter(c, c.end()));     // inserter返回的插入迭代器的=调用的是insert
    //copy(v.begin(), v.end(), back_inserter(c));       // 错误，back_inserter返回的插入迭代器的=调用的是push_back，set没有push_back
    copy(c.begin(), c.end(), inserter(v, v.end()));
    copy(c.begin(), c.end(), back_inserter(v));

    return 0;
}