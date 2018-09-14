#include <iostream>

using namespace std;

int main()
{

    int a=2000;
    char c=a;
    int b=c;
    cout<<"________CON SIGNO____________"<<endl;
    if (a==b){cout<<"wou, tenemos caracteres gigantes"<<endl;}
    else{cout<<a<<" es diferente de "<<b<<endl;}

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"________SIN SIGNO____________"<<endl;

    unsigned int d=2000;
    unsigned char f=a;
    unsigned int e=f;

    if (d==e){cout<<"wou, tenemos caracteres gigantes"<<endl;}
    else{cout<<d<<" es diferente de "<<e<<endl;}

    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;


    return 0;
}
