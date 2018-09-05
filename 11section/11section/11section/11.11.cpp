#include <set>
#include "Sales_data.h"

int main()
{
    std::multiset<Sales_data, bool (*)(const Sales_data &, const Sales_data &)>
        bookstore(compareIsbn);

    using Less = bool(*)(const Sales_data &, const Sales_data &);

    std::multiset<Sales_data, Less>
        bookstore2(compareIsbn);
    
    return 0;
}