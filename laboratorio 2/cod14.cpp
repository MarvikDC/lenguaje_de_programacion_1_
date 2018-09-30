#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<double>v;
    v.push_back(2.7);
    v.push_back(5.6);
    v.push_back(7.9);
    for(int i=0;i<v.size();++i)
        cout<<"v["<<i<<"]=="<<v[i]<<'\n';
    return 0;
}
