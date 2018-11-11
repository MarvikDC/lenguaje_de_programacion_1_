#include <iostream>

using namespace std;

int main()
{
    unsigned long long a=1;
    int b=1;

        while (b<=64)
        {
            cout<<"cuadrado"<<'\t'<<b<<endl;
            cout<<"cantidad de arroz"<<'\t'<<a<<endl;
            a=a*2;
            b++;
        }

    return 0;
}
