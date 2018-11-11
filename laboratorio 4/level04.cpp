#include <iostream>
#include<vector>
using namespace std;

void init(vector<double>& v)
{
    for(int i=0; i<v.size();++i)v[i]=i;
}
void g(int x){
    vector<double>vd1(10);
    vector<double>vd2(10000000);
    vector<double>vd3(x);

    init(vd1);
    init(vd2);
    init(vd3);
}
int main(){
    g(10);
}
