#include <iostream>

using namespace std;
double calculadora(int n1,int n2,char op)
{
    double r;
    switch(op)
    {
        case '+': {r=n1+n2;break;}
        case '-': {r=n1-n2;break;}
        case '*': {r=n1*n2;break;}
        case '/': {r=n1/n2;break;}
    }
        return r;
}
int main()
{
    cout << "ingrese dos numeros seguidos del operador" << endl;
    int a,b; char o; double x;
    cin>>a>>b>>o;
    if (o=='+'||o=='-'||o=='*'||o=='/')
    {
        x=calculadora(a,b,o);
        cout<<x<<endl;
    }
    else {cout<<"ese operador no lo conozco"<<endl;}
    return 0;
}
