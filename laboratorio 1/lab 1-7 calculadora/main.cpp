#include <iostream>

using namespace std;

int main()
{
    //double v1,v2;
    string op;
    double r,s,t;
    cout << "ingrese un operador (+,-,/,*) y luego dos numeros (reales)" << endl;
    cout<<"operador ";cin>>op;
    cout<<"valor 1 ";cin>>r;
    cout<<"valor 2 ";cin>>s;
    //r=v1;
    //s=v2;

    if(op=="+"){t=r+s;}
    else if(op=="-"){t=r-s;}
    else if(op=="*"){t=r*s;}
    else if(op=="/"){t=r/s;}
    cout<<"el operar da:  "<<t<<endl;


    return 0;
}
