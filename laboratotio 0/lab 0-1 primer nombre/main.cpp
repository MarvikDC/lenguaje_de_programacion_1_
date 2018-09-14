#include <iostream>
#include<string>
using namespace std;
int main() {
  cout << "Por favor ingrese su nombre (luego presione enter)";
  string first_name;
  int age;

  cin >> first_name;

  cout << "Por favor ingrese su edad (luego presione enter)";
  cin >> age;
  cout <<"Hola, "<<first_name<<"("<<age<<")"<<"\n";
    return 0;

}
