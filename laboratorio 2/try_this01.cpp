#include <iostream>

using namespace std;

int main()
{
    //yenes a euros y lbras a dolares con if
    const double y_e=0.76;
    const double l_usd=1.30;
    double monto=1;
    char mone=' ';
    cout<<"por favor ingrese un monto seguido de la moneda para convertir yenes (y) a euros (e) o viceversa \n"<<endl;
    cout<<"si desea convertir libras a dolares cambie en moneda ingrese l o d, segun su requerimiento"<<endl;
    cin>>monto>>mone;

     if (mone=='y')
        {cout<<monto*y_e<<endl;}
     else if (mone=='e')
        {cout<<monto/y_e<<endl;}
     else if (mone=='l')
        {cout<<monto*l_usd<<endl;}
     else if (mone=='d')
        {cout<<monto/l_usd<<endl;}
     else
        {cout<<"no conozco la moneda "<<mone<<endl;}
    cout<<mone;
    return 0;
}
