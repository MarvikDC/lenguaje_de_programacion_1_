#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    vector<string>censura;
    vector<string>frases;
    string r,fin="a",p="piiii";
    int tfrase=0,i,j;
    /*while(cin>>r&&r!="p")
        pi.push_back(i);*/
    string a="carajo",b="mierda",c="jodete",d="maldito";
    censura.push_back(a);
    censura.push_back(b);
    censura.push_back(c);
    censura.push_back(d);
    while(r!=fin)
    {
        cin>>r;
        frases.push_back(r);
    }
   for(j=0;j<=frases.size();++j)
    {
       for(i=0;i<=censura.size();++i)
        {
            if (frases[j]==censura[i])
            {
                frases[j]=p;
                break;
            }
        }
       // tfrase+=1
    }
    for(j=0; j<=frases.size();++j)
        cout<<frases[j]<<" ";

    return 0;
}
