#include <iostream>

using namespace std;
int area(int length, int width);
int main()
{
    //int x0=arena(7);//funcion no declarada
    //int x1=area(7);//numero de argumentos
    //int x2=area("seven",2);//tipo 1er argumento
    int x3=area(7,7);
    return 0;
}
int area(int length, int width)
{
    return length*width;
}
