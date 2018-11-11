#include <iostream>

using namespace std;

int area(int length, int width)
{
    return length*width;
}

const int frame_width=2;

int framed_area(int x, int y)
{
    return area(x-frame_width,y-frame_width);
}

int main()
try{
    int x=8;
    int y=5;
    int z=4;
    {
        if(x<=0) throw runtime_error("x es negativo");
        if(y<=0) throw runtime_error("y es negativo");
        int area1=area(x,y);
    }
    {
        if(x<=0 || y<=0) throw runtime_error("argumento no positivo");
        int area1=area(x,y);
        if(z<=2)
            throw
                runtime_error("argumento no positivo");
        int area2=framed_area(x,z);
        if(y<=2 || z<=2)
            throw
                runtime_error("argumento no positivo");
        int area3=framed_area(y,z);
        double ratio =double(area1)/area3;
    }
    {
        if(x-frame_width<=0 || z-frame_width<=0)
            throw runtime_error("argumento negativo");
        int area2=framed_area(1,z);
        if(y-frame_width<=0 || z-frame_width<=0)
            throw runtime_error("argumento negativo");
        int area3=framed_area(y,z);
    }
}
catch(exception & e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}