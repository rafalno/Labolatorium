// Zadanie 0.7 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
  double a, b, przekatna;

  cout << "Prosze poodac dwa boki prostokata: " << endl;
  cout << "Bok nr 1: ";
  cin >> a;
  cout << "Bok nr 2: ";
  cin >> b;
    przekatna = sqrt ((a * a) + (b * b));

  cout << "Dlugosc przekatnej prostokata wynosi " << przekatna << endl;
  return 0;
}
