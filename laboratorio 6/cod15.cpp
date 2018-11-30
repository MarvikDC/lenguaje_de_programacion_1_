#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int* p=&x;
    *p = 7;
    int x2=*p;
    int* p2 = &x2;
    p2 = p;
    p = &x2;

    int y=10;
    int& r = y;
    r= 7;
    int y2 = r;
    int& r2 = y2;
    r2 = r;
}
