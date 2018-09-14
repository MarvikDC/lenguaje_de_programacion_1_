#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    string p_nombre, amigo,genero="ini", remitente, frase_final,el_ella;
    int edad, elec_genero, esc=0,n_frase=2;
    //inicio de carta
    cout<<"Dear________";
    cout<<"\n**recipient's name: "; cin>>p_nombre;
    system("cls");
    cout<<"Dear "<<p_nombre<<"\n";
    cout<<"How are you? I'm fine. I miss you.\nI always remember your laugh.\nI really miss your jokes.\n";
    cout<<"Have you seen_________lately? \n";
    //ingresar y validar datos del tercer amigo
    cout<<"**friend's name: "; cin>>amigo;
    cout<<"**friend's gender ('male' or 'female')";
    while(esc==0)
        {
            cout<<"\nWrite '1' if your friend is a men or write '2' if your friend is a women--->";
            cin>>elec_genero;
            //cout<<elec_genero;
            if (elec_genero==1) {genero="male";el_ella="him";esc=1;}
            else if (elec_genero==2){genero="female";el_ella="her";esc=1;}
            //cout<<genero;
        }
    cout<<"**friend's age "; cin>>edad;
    //cout<<edad;
    while (edad<=0 || edad>=110) {cout<<"ingrese una edad correcta: ";cin>>edad; }
    if (edad<12)
        {   edad=edad+1;
            frase_final="Next year you will be ";
            n_frase=1;
          }
    else if (edad>=18 && edad<70)
        {
            frase_final="You are able to vote ";
          }
    else if (edad>=70)
        {
            frase_final="I hope you are enjoying retirement ";
        }
    system("cls");
    cout<<"Dear "<<p_nombre<<"\n";
    cout<<"How are you? I'm fine. I miss you.\nI always remember your laugh.\n";
    cout<<"Have you seen "<<amigo<<" lately? \n";
    cout<<"If you see "<<amigo<<" please ask "<<el_ella<<" to call me.\n";
    cout<<frase_final; if(n_frase==1){cout<<edad;}
    cout<<"\nyours sincerely\n";
    cout<<"**sender's name "; cin>>remitente;

     system("cls");
    cout<<"Dear "<<p_nombre<<"\n";
    cout<<"How are you? I'm fine. I miss you.\nI always remember your laugh.\n";
    cout<<"Have you seen "<<amigo<<" lately? \n";
    cout<<"If you see "<<amigo<<" please ask "<<el_ella<<" to call me.\n";
    cout<<frase_final; if(n_frase==1){cout<<edad;}
    cout<<"\nyours sincerely\n";
    cout<<remitente;
    return 0;
}
