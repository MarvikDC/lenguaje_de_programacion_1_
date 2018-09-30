#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int b=0;
   cout<<"por favor ingrese dos enteros\n";
   cin>>a>>b;
   if(a<b)//condicion
        //si la condicion es verdadera
        cout<<"max("<<a<<","<<b<<") is "<<b<<"\n";
   else
        //si la ocndicion es falsa
        cout<<"max("<<a<<","<<b<<") is"<<a<<"\n";
    return 0;
}
