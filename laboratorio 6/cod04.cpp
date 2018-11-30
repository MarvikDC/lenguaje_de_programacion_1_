#include <iostream>

using namespace std;

int main()
{
    double* p=new double[4];
    double x=*p;
    double y=p[2];

    *p=7.7;
    p[2]=9.9;
    {
        double x = p[3];
        p[3]= 9.9;
        double y =p[0];
    }
}
