#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<string>words;
    string temp;
    while(cin>>temp||pare<10)
        words.push_back(temp);
        cout<<"numero de palabras: "<<words.size()<<endl;
    sort(words.begin(),words.end());
    for(int i=0;i<words.size();++i)
        if(i==0|| words[i-1]!=words[i])
            cout<<words[i]<<"\n";
    return 0;
}
