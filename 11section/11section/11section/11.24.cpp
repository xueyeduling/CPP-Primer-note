#include <map>

int main(void)
{
    /*
    将0作为关键字插入m中，值初始化为0
    然后将1赋予m[0]
    */
    std::map<int, int> m;
    m[0] = 1;

    system("pause");
    return 0;
}