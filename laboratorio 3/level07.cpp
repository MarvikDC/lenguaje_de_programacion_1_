#include <iostream>

using namespace std;

class Bad_area{};
int area(int length, int width)
{
    if(length<=0 || width <=0) throw Bad_area{};
    return length*width;
}
int framed_area(int x, int y)
{
    const int frame_width=2;
    if(x-frame_width<=0 || y-frame_width<=0)
        throw runtime_error("argumento negativo");
    return area(x-frame_width, y-frame_width);
}
int main()
try
{
    int x=-1;
    int y=2;
    int z=4;
    int area1=area(x,y);
    int area2=framed_area(1,z);
}
catch (Bad_area){
    cout<<"Oops! argumentos invalidos para area()"<<endl;
}