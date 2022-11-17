// Zadanie 2.5 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>
#include <cmath>

using namespace std;


int main ()
{
  float a, b, c, x, x1, x2, delta;

  cout << "Prosze podac parametr a. Nie moze on wynosic 0." << endl;
  cin >> a;

  if (a == 0)			// dla a rownego zero zakoncz program
    {
      cout << "Wartosc a nie moze wynosic 0. Sprobuj ponownie" << endl;
      return 0;
    }

// wczytanie pozostalych parametrow.
  cout << "Prosze podac parametr b. " << endl;
  cin >> b;
  cout << "Prosze podac parametr c. " << endl;
  cin >> c;

  delta = (b * b) - (4 * a * c);	// wzor na obliczenie delty

  cout << "Delta wynosi: " << delta << endl; 

// wynik zalezny od tego ile wynosi delta. warunki if
  if (delta < 0)
    {
      cout << "Rownanie kwadratowe nie ma zadnych rozwiazan. ";
      return 0;
    }

  else if (delta == 0)
    {
      cout << "Rownanie kwadratowe ma jedno rozwiazanie. ";

      x = (-1 * b) / 2 * a;
      cout << "Wynikiem rownania jest x wynoszacy:  " << x << endl;
      return 0;
    }
  else if (delta > 0)
    {
      cout << "Rownanie kwadratowe ma dwa rozwiazania. " << endl;
      x1 = (-b - (sqrt (delta))) / (2 * a);
      x2 = (-b + (sqrt (delta))) / (2 * a);

      cout << "x1 = " << x1 << endl;
      cout << "x2 = " << x2 << endl;
      return 0;
    }
}
