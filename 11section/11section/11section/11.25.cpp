#include <vector>

int main(void)
{
    /*
    v中并没有元素，v[0]越界...
    */
    std::vector<int> v;
    v[0] = 1;

    return 0;
}