#include <iostream>

using namespace std;

struct Link{

    string value;
    Link* prev;
    Link* succ;
    Link(const string& v, Link* p=0, Link* s=0)
        : value(v), prev(p), succ(s){}
};

Link* insert(Link* p, Link* n)
{
    n-> succ = p;
    p ->prev->succ = n;
    m-> prev=p->prev;
    p->prev =n;

    return n;
}

int main()
{
    Link* nord_gods = new Link("Thor", 0 ,0);
    Link* head =  nord_gods;
    printf(head);
    nord_gods= new Link("Odin",nord_gods,0)
    printf(head);
    nord_gods->prev->succ= nord_gods;
    printf(head);
    nord_gods= new Link("Freia",nord_gods,0)
    printf(head);
    nord_gods->prev->succ=nord_gods;
    printf(head);
}
