#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
double a1=4, a2=4.5, a3=5,a4=2, a5=1.5, tot;
int cod,cant;
cin>>cod; cin>>cant;
if(cod==1){tot=cant*a1;}
if(cod==2){tot=cant*a2;}
if(cod==3){tot=cant*a3;}
if(cod==4){tot=cant*a4;}
if(cod==5){tot=cant*a5;}
//cout<<"Total: R$ "<<tot*100/100<<endl;
printf("Total: R$ %.2f\n",tot);

return 0;
}
