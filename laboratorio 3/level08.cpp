#include <iostream>
#include <vector>
using namespace std;

int main()
try
{
    vector<int>v;
    for(int x; cin>>x;)
        v.push_back(x);
    for (int i=0; i<=v.size(); ++i)
        cout<<"v["<<i<<"] == "<<v[i]<<endl;
}
catch(out_of_range){
    cerr<<"Oops! Error de rango"<<endl;
    return 1;
}
catch(...)
{
    cerr<<"Error: algo salio mal"<<endl;
    return 2;
}