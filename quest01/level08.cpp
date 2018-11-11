#include <iostream>
#include<vector>
#include<string>

using namespace std;
double calculadora(int n1,int n2,char op)
{
    double r;
    switch(op)
    {
        case '+': {r=n1+n2;break;}
        case '-': {r=n1-n2;break;}
        case '*': {r=n1*n2;break;}
        case '/': {r=n1/n2;break;}
    }
        return r;
}
int conversor(string in)
{
    vector<string>lista;
    int num;
    lista.push_back("0");
    lista.push_back("1");
    lista.push_back("2");
    lista.push_back("3");
    lista.push_back("4");
    lista.push_back("5");
    lista.push_back("6");
    lista.push_back("7");
    lista.push_back("8");
    lista.push_back("9");
    lista.push_back("cero");
    lista.push_back("uno");
    lista.push_back("dos");
    lista.push_back("tres");
    lista.push_back("cuatro");
    lista.push_back("cinco");
    lista.push_back("seis");
    lista.push_back("siete");
    lista.push_back("ocho");
    lista.push_back("nueve");
    for(int i=0;i<=19;i++)
    {
      if(lista[i]==in)
      {
        num=i;
        if(num>=9){num=num-10;}
        break;
      }

    }
   return num;
}
int main()
{
    string in1,in2;
    char signo; double resultado;int a=1;
    while (a==1)
    {
    cin>>in1>>in2>>signo;
    resultado=calculadora(conversor(in1),conversor(in2),signo);
    cout<<"resultado= "<<resultado<<endl;
    }
    return 0;
}
