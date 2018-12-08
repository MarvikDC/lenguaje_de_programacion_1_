#include <iostream>
using namespace std;

void to_lower(char* S)
{
  int count=0,min='a',may='A',dif=min-may;
  while(S[count]!='\0')
  {
    int temp=S[count];
    S[count]=temp+dif;
    count++;
  }
}

int main() 
{
  char prueba='A';
  char*ptr=&prueba;
  to_lower(ptr);
  cout<<prueba<<endl;
  return 0;
}