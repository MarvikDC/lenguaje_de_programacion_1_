#include <iostream>
#include<vector>
using namespace std;


int f(int& x){
    x=x+1;
    return x;
}

int main(){
    int xx=0;
    cout<<f(xx)<<endl;
    cout<<xx<<endl;

    int yy= 7;
    cout<<f(yy)<<endl;
    cout<<yy<<endl;
}
