#include <iostream>
#include<random>

using namespace std;
int evaluar(string arg1,string arg2)
{
    int r;
    if(arg1=="piedra"&&arg2=="tijera"){r=1;}
    if(arg1=="piedra"&&arg2=="papel"){r=-1;}
    if(arg1=="papel"&&arg2=="tijera"){r=-1;}
    if(arg1=="papel"&&arg2=="piedra"){r=1;}
    if(arg1=="tijera"&&arg2=="papel"){r=1;}
    if(arg1=="tijera"&&arg2=="piedra"){r=-1;}
    if(arg1==arg2){r=0;}
    return r;
}
int radint(int mini,int maxi)
{
    static default_random_engine ran;
    return uniform_int_distribution<>{mini,maxi}(ran);
}
string jugada_maq()
{
    int a;
    string j_m;
    a=radint(1,3);
    if(a==1){j_m="piedra";}
    if(a==2){j_m="papel";}
    if(a==3){j_m="tijera";}
    return j_m;
}
void jugar(void)
{
    int x1=0,x2=0,sum=0;
    string j_arg1,j_arg2,mensaje;
    while(x1<3&&x2<3)
    {
      cout<<"ingrese su jugada: piedra, papel o tijera"<<endl;
      cin>>j_arg1;
      j_arg2=jugada_maq();
      sum=evaluar(j_arg1,j_arg2);
      if(sum>0)
      {
          x1+=sum;
          mensaje="usted gana la ronda";
      }
      if(sum<0)
      {
          x2+=(-1*sum);
          mensaje="usted pierde la ronda";
      }
      if(sum==0){mensaje="empate";}
      cout<<mensaje<<" "<<j_arg1<<" vs "<<j_arg2<<'\t'<<"score: jugador1="<<x1<<" maquina="<<x2<<endl;
    }
}

int main()
{
    int cont=0;
    string decision;
    if (cont==0)
    {
        cout<<"piedra papel o tijera"<<endl;
        jugar();
        cont++;
    }
    while(cont>0)
    {
       cout<<"seguir jugando? si, no"<<endl;
       cin>>decision;
       if(decision=="si"){jugar();}
       else{break;}
    }
    cout<<"gracias"<<endl;
    return 0;
}

