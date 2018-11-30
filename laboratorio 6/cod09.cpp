#include <iostream>

using namespace std;

class vector{
    int sz;
    double* elem;
public:
    vector(int s)
        :sz(s),elem(new double[s])
    {
        for(int i=0; i<s; ++i) elem [i]=0;
    }

    ~vector()
        {
            delete[] elem;
        }
};

void f3(int n)
{
    int* p = new int [n];
    vector v(n);

    delete[] p;
}

int main()
{
    f3(42);
}
