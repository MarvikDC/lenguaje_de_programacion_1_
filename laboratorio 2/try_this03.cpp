#include <iostream>

using namespace std;
char entero(int n)
{
  return n;
}

int main()
{
    int i=97;

    while (i<123){
        cout<<entero(i)<<'\t'<<i<<'\n';
        ++i;
    }
    return 0;
}
