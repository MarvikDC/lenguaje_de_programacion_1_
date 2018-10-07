#include <iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
char unidad(string dd)
{
    char uuu;
    if (dd=="m"){uuu='m';}
    if (dd=="ft"){uuu='f';}
    if (dd=="cm"){uuu='c';}
    if (dd=="in"){uuu='i';}
    return uuu;
}
double igualador(double d, char unit)
{
    double m_cm=100.00;
    double ft_in=12.00;
    double ft_m=0.3048;
    double eq;
    //todo a metros

    switch (unit)
        {
        case 'm':{eq=d; break;}
        case 'c':{eq=d/m_cm; break;}
        case 'f':{eq=d*ft_m; break;}
        case 'i':{eq=(d/ft_in)*ft_m; break;}
        default:{eq=11111;}
        }
    return eq;
}

int main()
{
    double mayor1=0,menor1=0, dato,rr;
    double mayor_print=0,menor_print=0,suma=0;
    int rep=0,i=0;
    vector<double>valores;
    //char may='m',men='m',esc='s',unid;
    string may="m", men="m",unid;
    char esc='s';
    while(esc!='#')
        {
        system("cls");
        cout<<"ingrese magnitud, seguida de unidad m,cm,ft,in"<<endl;
        cin>>dato;
        cin>>unid;
        if (unid=="m"||unid=="cm"||unid=="ft"||unid=="in")
        {
            rr=igualador(dato,unidad(unid));
            if(menor1==0 && rep==0)
            {
                menor1=rr;
                menor_print=dato;
                men=unid;
                rep=1;
            }
            if(rr>=mayor1)
            {
                //menor1=mayor1;
                //menor_print=mayor_print;
                //men=may;
                mayor1=rr;
                mayor_print=dato;
                may=unid;
            }
            if(menor1>=rr)
            {
                menor1=rr;
                menor_print=dato;
                men=unid;
            }
            suma+=rr;
            cout<<"el mayor hasta el momento es: "<<mayor_print<<may<<endl;
            cout<<"Y el menor hasta el momento es: "<<menor_print<<men<<endl;
            cout<<"la suma hasta el momento es: "<<suma<<"m"<<endl;
            valores.push_back(rr);
            sort(valores.begin(),valores.end());
            for(i=0;i<valores.size();++i)
            {cout<<valores[i]<<'\t';}

        }
        else {cout<<'\n'<<"No reconozco el valor"<<dato<<" "<<unid<<endl;}
        cout<<'\n'<<" '#' para finalizar comparacion, cualquier simbolo para seguir"<<endl;
        cin>>esc;
        }
    return 0;
}
