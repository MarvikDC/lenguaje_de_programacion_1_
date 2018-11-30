#include <iostream>
#include <vector>

using namespace std;

int main()
{
    {
        vector v(4);
        int x=v.size();
        double d = v.get(3);
    }

    {
        vector* p = new vector (4);
        int x = p->size();
        double d = p->get(3);
    }
}
