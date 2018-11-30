#include <iostream>

using namespace std;

void f(int a, int& r, const int& cr)
{
    ++a;
    ++r;
    //++cr;
}
void g(int a, int& r, const int& cr)
{
    ++a;
    ++r;
    int x = cr;
}

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;

    g(x,y,z);
    g(1,y,3);
}
