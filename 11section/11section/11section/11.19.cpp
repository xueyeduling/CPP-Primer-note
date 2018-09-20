#include <set>
#include "Sales_data.h"

using namespace std;

int main(void)
{
    multiset<Sales_data, decltype(compareIsbn) *>
        bookstore(compareIsbn);

    multiset<Sales_data, decltype(compareIsbn) *>::iterator iter = bookstore.begin();

    return 0;
}