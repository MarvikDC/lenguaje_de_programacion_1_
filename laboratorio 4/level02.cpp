#include <iostream>
#include<vector>
using namespace std;

void print_until(const vector<string>v,
                    const string quit)
{
    for(int i=0; i<v.size();++i){
        if(v[i]==quit) return ;
        cout<<v[i]<<'\n';
    }
}
