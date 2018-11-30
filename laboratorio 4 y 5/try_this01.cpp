#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void inver1(vector<int>v)
{
    vector<int>inver(v.size());

    int x=0;

    int i= (v.size()-1);
    while(i>=0)
    {
            inver[x]=v[i];
            i=i-1;
    }
}

void inver2(vector<int>& v)
{
    int x=0;

    int i= (v.size()-1);
    while(i>=0)
    {
            swap(v[i],v[x]);
            	x++;
		i=i-1;
		
    }
}

}

