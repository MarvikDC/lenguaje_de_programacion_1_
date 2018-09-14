#include <iostream>

using namespace std;

int main()
{
    cout << "ingrese un numero entero desde cero a hasta cuatro" << endl;
    int num;
    string cero="cero", uno="uno", dos="dos", tres="tres", cuatro="cuatro",f="--->";
    cin>>num;
    if(num==0){cout<<cero<<f<<num;}
    else if(num==1){cout<<uno<<f<<num;}
    else if(num==2){cout<<dos<<f<<num;}
    else if(num==3){cout<<tres<<f<<num;}
    else if(num==4){cout<<cuatro<<f<<num;}
    else {cout<<"no es un numero que conozco";}
    return 0;
}
