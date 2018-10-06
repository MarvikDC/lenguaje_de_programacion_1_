#include <iostream>

using namespace std;

int main()
{
    double a, b,dif=(1.0/100);
    char d='$',e;

    //cin>>a>>b;
    while(d!='#')
    {
       cin>>a>>b;
       cout<<a<<'\t'<<b<<endl;
       if (a==b)
       {
           cout<<"los numeros son iguales"<<endl;
       }
       else
       {
         if(a>b)
          {cout<<"El mayor valor es "<<a<<"\n"<<"El menor valor es "<<b<<endl;
          if((a-b)<=dif){cout<<"los numeros son casi iguales"<<endl;}}
         else
        {
            cout<<"El mayor valor es "<<b<<"\n"<<"El menor valor es "<<a<<endl;
            if((b-a)<=dif){cout<<"los numeros son casi iguales"<<endl;}}
       }
       cout<<"seguir";cin>>d;

    }
    return 0;
}
