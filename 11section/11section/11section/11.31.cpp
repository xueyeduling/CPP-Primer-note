#include <map>

using namespace std;

int main(void)
{
    multimap<string, string> authors;
    string search_item("Alain de Botton");
    multimap<string, string>::iterator iter = authors.find(search_item);
    if (iter != authors.end())
        authors.erase(iter);

    system("pause");
    return 0;
}