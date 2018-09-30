#include <iostream>

using namespace std;

int main()
{
   double d=2.5;
   int i=2;
   double d2=d/i;   //d2==1.25
   int i2=d/i;      //i2=1
   d2=d/i;          //d2=1.25
   i2=d/i;          //i2=1
   {    double dc;
        cin>>dc;
        double df=9/5*dc+32;//cuidado!
        cout<<"9/5*"<<dc<<"+32="<<df<<endl;
    }
    {   double dc;
        cin>>dc;
        double df=9.0/5*dc+32;//mejor
        cout<<"9.0/5*"<<dc<<"+32="<<df<<endl;
    }
}
