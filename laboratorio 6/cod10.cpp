#include <iostream>

using namespace std;

class vector {

    int sz;
    double* elem;

public:
    vector(int s) : sz(s), elem( new double[s]){ }

    ~vector(){delete [] elem;}

    int size() const { return sz; }

    double getc(int n) { return elem[n]; }

    void set(int n, double v) { elem[n]=v; }
};

int main()
{
    vector v[5];

    for(int i= 0; i<v.size();++i)
    {
        v.size()(i,1.1*i);
        cout<<"v["<<i<<"] == "<<v.getc(i)<<'\n';
    }
}
