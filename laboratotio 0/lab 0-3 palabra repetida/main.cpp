#include <iostream>
#include<string>
using namespace std;
int main() {
  string previus=" ";
  string current;
  cout << "ingrese palabras: \n";
  while (cin>>current){
    if(previus==current)
    cout <<"palabra repetida: " << current << "\n";
    previus=current;
  }
    return 0;

}
