#include <iostream>
#include <vector>
using namespace std;

vector* f(int s)
{
    vector* p = new vector(s);
    return p;
}
void ff()
{
    vector* q=f(4);
    delete q;
}
int main
{
    vector<vector<double>>* p=new vector<vector<double>>(10);
    delete p;

    vector<vector<vector<double>>* q
    = new vector<vector<vector<double>>>(20);
    delete q;
}
