#include <iostream>
using namespace std;
class Link{

public:
    string value;
    Link(const string& v, Link* p=0, Link* s=0)
        :value(v), prev(p), succ(s) {}
    Link* insert(Link* n);
    Link* erase();
    Link* find(const string& s);
    const Link* find(const string& s) const;
    Link* next() const { return succ;}
    Link* previus() const {return prev;}
    bool Find();
	void imprimir(string a);
private:
    Link* prev;
    Link* succ;

};

bool Link::bool Find(string a)
{
b=this;
while(b->prev!=NULL)
{
  b=b->prev;
}
while(b-succ!=NULL)
{
  if(b->value==a)
  {
    return true;
  }
  b=b->succ;}
  return false;
}
int main()
{
Link* m=new Link("hola");
Link* n=new Link("perro");
Link* o=new Link("guffi");
Link Find("perro");

 return 0; 
}