#include <iostream>
#include<vector>
using namespace std;

void larger(vector<int>& v1, vector<int>& v2){

    for(int i=0; i<v1.size(); ++i)
        if(v1[i]<v2[i])
            swap(v1[i],v2[i]); //para usar swap incluir algorithm
}

int main()
{
    vector<int>vx;
    vector<int>vy;

    larger(vx, vy);
    return 0;
}


