#include <iostream>

using namespace std;
int promedio(int x,int y)
{
    int prom,prom_red;
    prom=(x+y)/2;
    if((x+y)%2==0){prom_red=prom;}
    else{prom_red=prom+1;}
    return prom_red;
}
int main()
{
    string a="si",b="no",q;
    int mayor=100, menor=1, medio=0, pregunta=1;
    cout<<"piense en un numero"<<endl;
    while (pregunta<=7)
    {
        medio=promedio(mayor,menor);
        cout<<"es mayor igual a "<<medio<<endl;
        cin>>q;
        if(q==a){menor=medio;}
        else{mayor=medio-1;}
        pregunta++;
        //cout<<mayor<<'\t'<<menor<<'\t'<<pregunta<<endl;
    }
    if(mayor==menor)
    {cout<<"su numero es: "<<mayor<<endl;}
    else{cout<<"hay algo extraño"<<endl;}

    return 0;
}
