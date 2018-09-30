#include <iostream>

using namespace std;

int main()
{
   int length = 20;
   int width =40;
   int area=length*width;
   length=99;
    {int perimeter =(length+width)*2;
    }//suma luego multiplica
    {int perimeter=length*2+width*2;
    }
    {int perimeter=length+width/2;
    }//suma width *2 a lenght
    return 0;
}
