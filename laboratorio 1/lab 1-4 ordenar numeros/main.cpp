#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a, b, c,aux;

    cout<<"ordenar numeros"<<endl;
    cout<<"primer numero"<<endl;
    cin>>a;
    cout<<"segundo numero"<<endl;
    cin>>b;
    cout<<"tercer numero"<<endl;
    cin>>c;
    cout<<"ordenados de menor a mayor: ";
    //orden
    if(a>b)
    {aux=a;
    a=b;
    b=aux;
    }
    if(a>c)
    {aux=a;
    a=c;
    c=aux;
    }
    if(b>c)
    {aux=b;
    b=c;
    c=aux;
    }
    cout<<a<<"  "<<b<<"  "<<c<<endl;
    return 0;
}

