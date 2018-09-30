#include <iostream>

using namespace std;
int square (int x)
{
    return x*x;
}
//--------------------
void write_sorry()
{
    cout<<"sorry\n";
}
//--------------------
int main()
{
    cout<<square(2)<<'\n';
    cout<<square(10)<<'\n';
    square(2);
    write_sorry();
    return 0;
}
