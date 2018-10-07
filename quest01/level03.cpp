#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<double>temps;
    double temp,sum=0;
    int c=0;
    while(cin>>temp&&temp!=-100)
        temps.push_back(temp);

    for (int i=0;i<temps.size();++i)
        {sum +=temps[i];
        c++;}
    cout<<"temperatura promedio: "
    <<sum/temps.size()<<endl;

    sort(temps.begin(),temps.end());
    cout<<"median temperature: ";
    //cout<<"--------------------"<<c<<"----";
    //<<temps[temps.size()/2]<<endl;
    //-------------------------------
    //cout<<"correcion"<<endl;
    if(c%2==0)
    {
     cout<<(temps[temps.size()/2-1]+temps[temps.size()/2])/2<<endl;}

    else{//cout<<"median temperature: "
    cout<<temps[temps.size()/2]<<endl;}

    return 0;
}
