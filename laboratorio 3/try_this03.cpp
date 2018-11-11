#include <iostream>
#include<vector>
using namespace std;
string get_moda(vector<string>&v)
{
    int i=0,j=0,cont=0,aux=0,p_moda;
    string resultado;
    for(i=0;i<=v.size();i++)
    {
        aux=0;
        for(j=0;j<=v.size();j++)
        {
            if(v[i]==v[j])
            {
                aux++;
            }
        }
        if(aux>cont)
        {
            cont=aux;
            p_moda=i;
            //aux=0;
        }
    }
    resultado=v[p_moda];
    return resultado;
}


int main()
{
    //moda en un vector de string
    vector<string>palabras;
    //vector<string>*ptr_palabras;
    //ptr_palabras=&palabras;
    string moda;
    palabras.push_back("uno");
    palabras.push_back("dos");
    palabras.push_back("uno");
    palabras.push_back("tres");
    palabras.push_back("uno");
    palabras.push_back("dos");
    palabras.push_back("uno");
    palabras.push_back("dos");
    palabras.push_back("uno");
    palabras.push_back("dos");
    palabras.push_back("dos");
    palabras.push_back("dos");
    palabras.push_back("dos");
    moda=get_moda(palabras);
    cout<<"la moda es: "<<moda<<endl;
    return 0;
}
