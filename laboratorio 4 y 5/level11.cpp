#include <iostream>
#include<vector>
using namespace std;

struct Date
{
    Date(int y, int m, int d){}
};

namespace good
{
    const Date default_date(1970,1,1);
}
namespace better
{
    const Date default_date()
    {
        return Date(1970,1,1);
    }
}
namespace best
{
    const Date& default_date()
    {
        static const Date dd(1970,1,1);
        return dd;
    }
}
int main()
{
    Date d1 = good::default_date;
    Date d2 = better::default_date();
    Date d3 = best::default_date();
}
