#include <iostream>

using namespace std;
char entero(int n)
    {
        return n;
    }
int main()
{
    int i=97;
    for(i=97;i<123;++i)
        cout<<entero(i)<<'\t'<<i<<'\n';
    for(i=65;i<91;++i)
        cout<<entero(i)<<'\t'<<i<<'\n';
    for(i=48;i<58;++i)
        cout<<entero(i)<<'\t'<<i<<'\n';
    return 0;
}
