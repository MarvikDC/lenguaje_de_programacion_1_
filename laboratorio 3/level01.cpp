#include <iostream>

using namespace std;
int area(int length, int width);
int main()
{
    //int s1=area(7;  //falta )
    //int s1=area(7)  //falta ;
    //Int s3=area(7); //Int no es un tipo
    //int s4=area ('7); // error de caracyer falta '
    return area(4,4);
}
int area(int length, int width)
{
    return length*width;
}
