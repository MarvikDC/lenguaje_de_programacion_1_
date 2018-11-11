#include <iostream>
#include<cmath>
using namespace std;
double formula(double a,double b, double c,char signo)
{
    double x;
    if (signo=='+')
    {
        x=(-1*b+sqrt((b*b)-(4*a*c)))/2*a;
    }
    else
    {
        x=(-1*b+sqrt((b*b)-(4*a*c)))/2*a;
    }
    return x;
}
int main()
{
    double x1,x2;
    int a,b,c;
    cout<<"ingrese los indices de la ecuacion"<<endl;
    cin>>a>>b>>c;
    if ((b*b)-4*a*c<0)
    {
        cout<<"imaginarios!"<<endl;
    }
    else
    {
        x1=formula(a,b,c,'+');
        x2=formula(a,b,c,'-');
        cout<<"las raices son: x1="<<x1<<" x2="<<x2<<endl;
    }

    return 0;
}
