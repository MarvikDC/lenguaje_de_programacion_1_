#include <iostream>

using namespace std;

int main()
{
    int val, aux,a=100, b=50, c=20,d=10, e=5, f=2, g=1, a1=0, b1=0, c1=0, d1=0, e1=0, f1=0, g1=0;
    string bill=" billete(s) de: ";
    cout<<"_____________Billetes-Calculadora__________"<<endl;
    cout<<"\n ingrese un valor entero positivo, para descomponer \n en la minima cantidad de billetes"<<endl;
    cin>>val;
    aux=val;
    if(aux>=a)
        {
            a1=aux/a;
            aux=aux%a;
            //cout<<aux<<endl;
        }
    if (aux>=b)
        {
            b1=aux/b;
            aux=aux%b;
            //cout<<aux<<endl;
        }
    if (aux>=c)
        {
            c1=aux/c;
            aux=aux%c;
            //cout<<aux<<endl;
        }
    if (aux>=d)
        {
            d1=aux/d;
            aux=aux%d;
            //cout<<aux<<endl;
        }
    if (aux>=e)
        {
            e1=aux/e;
            aux=aux%e;
            //cout<<aux<<endl;
        }
    if (aux>=f)
        {
            f1=aux/f;
            aux=aux%f;
            //cout<<aux<<endl;
        }
    if (aux>=g)
        {
            g1=aux;
            //cout<<aux<<endl;
        }

            cout<<"El valor de: "<<val<<"puede descomponerse en: "<<endl;
            cout<<a1<<bill<<a<<endl;
            cout<<b1<<bill<<b<<endl;
            cout<<c1<<bill<<c<<endl;
            cout<<d1<<bill<<d<<endl;
            cout<<e1<<bill<<e<<endl;
            cout<<f1<<bill<<f<<endl;
            cout<<g1<<bill<<g<<endl;

}
