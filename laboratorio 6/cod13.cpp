#include <iostream>

using namespace std;

int main()
{
    void* pv1 = new int;
    void* pv2 = new double[10];
}

void f(void* pv)
{
    void* pv2 = pv;
    int* pi = static_cast<int*>(pv);
}
