#include <iostream>
#include<vector>
using namespace std;

int incr1(int a){ return a+1;}

void incr2(int& a){++a}

int main()
{
    int x=7;
    x= incr1(x);
    incr2(x);
    return 0;
}


