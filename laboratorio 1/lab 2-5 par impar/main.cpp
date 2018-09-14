#include <iostream>

using namespace std;

int main()
{
    cout << "pares e impares" << endl;
    string impar=" es un numero impar", par=" es un numero par", ini="El valor de ";
    int num,b=2,h;
    cout<<"ingrese un numero"<<endl;
    cin>>num;
    h=num%b;
    if (h==0){cout<<ini<<num<<par<<endl;}
    else{cout<<ini<<num<<impar<<endl;}
    return 0;
}
