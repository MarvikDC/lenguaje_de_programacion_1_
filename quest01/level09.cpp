#include <iostream>

using namespace std;

int main()
{
    int n,in=1,numdiv;
    cin>>n;
    while(in<=n)
    {
      for(int i=1;i<=in;i++)
      {
          if(in%i==0){numdiv++;}
      }
      if(numdiv<=2){cout<<in<<endl;}
      numdiv=0;
      in++;
    }
    return 0;
}
