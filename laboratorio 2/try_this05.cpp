#include <iostream>

using namespace std;
int square(int x)
{
    int i=0;
    int r=0;
    for(i=1;i<=x;++i)
       {
        r=r+x;
       }
    return r;
}
int main()
{
    int y;
    cout << "numero" << endl;
    cin>>y;
    cout<<square(y)<<endl;
    return 0;
}
