#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int p, termino=1,paso1=1;
    string n;
    vector<string>nombres;
    vector<int>puntaje;
    while(cin>>n>>p&&n!="sinnombre")
    {
        if(paso1==1)
        {
            nombres.push_back(n);
            puntaje.push_back(p);
            paso1=0;
        }
        else
        {
        for(int i=0;i<=nombres.size();++i)
        {
            if(n==nombres[i])
            {
                cout<<n<<"="<<nombres[i]<<endl;
                cout<<"error; nombres repetidos"<<endl;
                termino=0;
                break;
            }
            cout<<"aqui manda el break"<<endl;
            if(termino==0){break;}
            else
            {
                nombres.push_back(n);
                puntaje.push_back(p);
            }

        }
        }

    }
    if(termino==1)
        {
            for(int j=0;j<=nombres.size();++j)
            {
                cout<<nombres[j]<<" "<<puntaje[j]<<endl;
            }
        }
    return 0;
}
