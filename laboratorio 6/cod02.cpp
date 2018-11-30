#include <iostream>

using namespace std;

int main()
{
    int var = 17;
    int* ptr = &var;

    char ch='c';
    char* pc=&ch;

    int ii=17;
    int* pi=&ii;

    cout<<"pc =="<<pc<<"; contenido de pc =="
    <<*pc<<"\n";

    cout<<"pi =="<<pi<<"; contenido de pi =="<<*pi<<"\n";

*pc='x';
*pi=27;
*pi=*pc;

{
    char ch1 ='a';
    char ch2 ='b';
    char ch3 ='c';
    char ch4 ='d';
}
}
