#include <iostream>
#include <random>

using namespace std;

int randint(int min,int max){
    static default_random_engine ran;
    return uniform_int_distribution<>{min, max}(ran);
}
int randint(int max){return randint(0,max);}

int main(){
    for(int i=0; i<20; i++){
        cout<<randint(9)<<" "<<endl;
    }
    return 0;
}