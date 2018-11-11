#include <iostream>

using namespace std;
int area(int length, int width);
int main()
{
    int x4=area(10,-7);//¿ancho -7?
    int x5=area(10.7,9.3);//corta numeros a (10,9)
    char x6=area(100,9999); //trunca el resultado
    return area(4,4);
}
int area(int length, int width)
{
    return length*width;
}
