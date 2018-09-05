#include <vector>
#include <list>
#include <map>

/*
可以定义vector<int>::iterator到int的map，因为vector的迭代器是随机迭代器，定义了<运算符
不可以定义list<int>::iterator到int的map，因为list的迭代器是双向迭代器，没有定义了<运算符
*/
int main(void)
{
    std::vector<int> ivec{ 1, 2, 3, 4, 5 };
    std::list<int> ilst{ 6, 7, 8, 9, 10 };

    std::map<std::vector<int>::iterator, int> imap;

    std::map<std::list<int>::iterator, int> lmap;

    for (std::vector<int>::iterator iter = ivec.begin(); iter < ivec.end(); ++iter)
    {
        imap[iter] = *iter;
    }

    /*for (std::list<int>::iterator iter = ilst.begin(); iter < ilst.end(); ++iter)
    {
        lmap[iter] = *iter;
    }*/

    return 0;
}