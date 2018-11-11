#include <iostream>
#include <random>
#include <vector>
using namespace std;

int randint(int min, int max)
{
    static default_random_engine ran;
    return uniform_int_distribution<>{min, max}(ran);
}

int main()
{
    vector<int>numbers;
    int number;
    int n=0;
    int si=0;
    int a; int b; int c; int d; int toros=0; int vacas=0;
    string continuar="si";
    while(continuar!="no"){
    while(n<4){
        number=randint(0,9);
        for(int i=0; i<numbers.size();i++){
            if(number==numbers[i]){
                si=1;
            }
        }
        if(si!=1){
            numbers.push_back(number);
            n++;
        }
        si=0;
    }
    n=0;
    while(toros!=4){
        cout<<"Ingrese sus numeros: "<<endl;
        cin>>a>>b>>c>>d;
        toros=0;
        vacas=0;
        if(a==numbers[0]){
        toros++;
        }
        if(a==numbers[1]||a==numbers[2]||a==numbers[3]){
        vacas++;
        }
        if(b==numbers[1]){
        toros++;
        }
        if(b==numbers[0]||b==numbers[2]||b==numbers[3]){
        vacas++;
        }
        if(c==numbers[2]){
        toros++;
        }
        if(c==numbers[0]||c==numbers[1]||c==numbers[3]){
        vacas++;
        }
        if(d==numbers[3]){
        toros++;
        }
        if(d==numbers[0]||d==numbers[1]||d==numbers[2]){
        vacas++;
        }
        cout<<"Toros: "<<toros<<endl<<"Vacas: "<<vacas<<endl;
    }
    toros=0;
    cout<<"Gano!"<<endl<<"continuar?"<<endl;
    cin>>continuar;
    numbers.clear();
    }
    return 0;
}
