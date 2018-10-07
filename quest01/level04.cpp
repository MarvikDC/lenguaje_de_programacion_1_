#include <iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    double mayor1=0,menor1=0, dato,rr;
    double mayor_print=0,menor_print=0,suma=0;
    int rep=0,i=0;
    vector<double>valores;
    //char esc='s';
    while(cin>>dato&&dato!=-100)
        {
         rr=dato;
            if(menor1==0 && rep==0)
            {
                menor1=rr;
                menor_print=dato;
                rep=1;
            }
            if(rr>=mayor1)
            {

                mayor1=rr;
                mayor_print=dato;

            }
            if(menor1>=rr)
            {
                menor1=rr;
                menor_print=dato;

            }
            suma+=rr;

            valores.push_back(rr);
         }
        int ciu1,ciu2,divisor=0;
        double media1=0;
            cout<<"la mayor distancia es: "<<mayor_print<<endl;
            cout<<"la menor distancia es: "<<menor_print<<endl;
            cout<<"la suma es: "<<suma<<endl;

            cout<<"ingrese los numero de distancia para la media: "<<endl;
            cin>>ciu1>>ciu2;
            for( i=ciu1;i<ciu2;++i)
            {
             media1+=valores[i];
             ++divisor;
            }
            cout<<"media: "<<endl;
            cout<<media1/divisor<<endl;
    return 0;
}
