#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<double>temps;
    double temp;
    while(cin>>temp)
        temps.push_back(temp);
    double sum=0;
    for (int i=0;i<temps.size();++i)
        sum +=temps[i];
    cout<<"temperatura pormedio"
    <<sum/temps.size()<<endl;

    sort(temps.begin(),temps.end());
    cout<<"median temperature: "
    <<temps[temps.size()/2]<<endl;
    return 0;
}
