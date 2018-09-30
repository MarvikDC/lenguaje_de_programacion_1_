#include <iostream>

using namespace std;

int main()
{
    const double y_e=0.76;
    const double l_usd=1.30;
    const double u_s=0.53;
    double monto=1;
    char mone=' ';
    cout<<"por favor ingrese un monto seguido de la moneda para convertir yenes (y) a euros (e) o viceversa \n"<<endl;
    cout<<"si desea convertir libras a dolares cambie en moneda ingrese l o d, segun su requerimiento"<<endl;
    cout<<"si desea convertir yuan a shekels cambie en moneda ingrese u o s, segun su requerimiento"<<endl;
    cin>>monto>>mone;
    switch(mone){
    case'y':
        cout<<monto*y_e;
    case'e':
        cout<<monto/y_e;
    case'l':
        cout<<monto*l_usd;
    case'd':
        cout<<monto*l_usd;
    case'u':
        cout<<monto*u_s;
    case's':
        cout<<monto*u_s;
    default:
        cout<<"no conozco la moneda "<<mone;
    }
    return 0;
}
