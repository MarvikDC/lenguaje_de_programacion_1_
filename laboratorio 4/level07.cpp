#include <iostream>
#include<vector>
using namespace std;

void swap(double& di, double& d2){

    double temp = d1;
    d1 = d2;
    d2 = temp;
}
int main()
{
    double x=1;
    double y=2;
    cout<<"x == " <<x<<" y == "<<y<< '\n';

    swap(x,y);
    cout<<"x == "<<x<<" y == "<<y<< '\n';
}
