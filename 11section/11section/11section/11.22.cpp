#include <map>
#include <vector>

using namespace std;

int main(void)
{
    map<string, vector<int>> imap;
    pair<string, vector<int>> ipair;
    pair<map<string, vector<int>>::iterator, bool> result = imap.insert(ipair);

    return 0;
}