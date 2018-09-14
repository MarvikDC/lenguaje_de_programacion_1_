#include <iostream>
#include<string>
using namespace std;
int main() {
  cout << " ingrese dos nombres \n";
  string first;
  string second;
  cin >> first >> second;
  string sum=first+second;
  cout << "La concatenacion es: "<< sum <<"\n";
  if (first==second) cout <<"ambos son iguales";
  if (first<second) cout << first <<" esta lexicograficamente antes que: " << second;
 if (first>second) cout << first <<" esta lexicograficamente despues que: " << second;
    return 0;

}
