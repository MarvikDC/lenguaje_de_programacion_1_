#include <iostream>

using namespace std;

class X
{
public:
    X(){}
};

class Y
{
public:
    Y(int){}
};

int main()
{
    double* p0;
    double* p1 = new double;
    double* p2 = new double (5.5);
    double* p3 = new double[5];

    *p0 = 7.0;


double* p4 = new double[5];

for (int i=0; i<5; ++i)p4[i]=i;

X* px1 =new X;
X* px2 =new X[17];

Y* py3= new Y(13);
}
