#include <iostream>
#include<vector>
using namespace std;

int main()
{
    //criba
    //vector<bool>nums;//el programa falla con vector, mas no con un arreglo simple.
    bool nums[101];
    nums[0]=false;
    nums[1]=false;
    for(int i=2;i<=100;++i)
    {
        nums[i]=true;
    }
    //cout<<"2do for"<<endl;
    for(int n=2;n*n<=100;++n)
    {
        //cout<<"n es="<<n<<endl;
        if(nums[n])
        {
            for(int i=n+n;i<=100;i+=n)
            {
                nums[i]=false;
                //cout<<"i ubicacion actual en el array="<<i<<" y n="<<n<<" y valor en array="<<nums[i]<<endl;
            }
        }
    }
    for(int j=2;j<=100;++j)
    {
        if(nums[j]==true)
        {
            cout<<j<<endl;
        }
    //cout<<"valor en p100="<<nums[100]<<endl;
    }
    return 0;

}
