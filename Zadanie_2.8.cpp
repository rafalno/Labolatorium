// Zadanie 2.8 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>

using namespace std;


int
main ()
{
  float a, a1;
  cout << "Podaj liczbe" << endl;
  cin >> a;

  if (a < 0)
    {
      a1 = a * (-1);
      cout << "Wartosc bezwzgledna podanej liczby wynosi: " << a1 << endl;
      return 0;

    }
  else

    cout << "Wartosc bezwzgledna podanej liczby wynosi: " << a << endl;
  return 0;
}