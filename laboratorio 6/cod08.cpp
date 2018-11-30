#include <iostream>

using namespace std;

int main()
{
    double* p0=0;
    //double* p0=nullptr;

    if (p0 != 0)
    {
        //es valido
    }
    if(p0)
    {
        //p0 es valido es lo mismo que p0!=0
    }
}
