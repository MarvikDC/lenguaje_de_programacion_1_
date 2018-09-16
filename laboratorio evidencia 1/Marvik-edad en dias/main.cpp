#include <iostream>

using namespace std;

int main()
{
    int val, aux, a=365, m=30, d=1, a1=0, m1=0, d1=0;
    cin>>val;
    aux=val;
    if(aux>=a){a1=aux/a;
                aux=aux%a;}
    if(aux>=m){m1=aux/m;
                aux=aux%m;}
    if(aux>=d){d1=aux;}
    cout<<a1<<" ano(s)"<<endl;
    cout<<m1<<" mes(es)"<<endl;
    cout<<d1<<" dia(s)"<<endl;

    return 0;
}
