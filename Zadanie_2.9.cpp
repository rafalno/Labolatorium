// Zadanie 2.8 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>

using namespace std;


int main ()
{
  float a, b;
  cout << "Podaj liczbe a" << endl;
  cin >> a;
  cout << "Podaj liczbe b" << endl;
  cin >> b;

  if (a > b)
    {
      cout << "Maksymalna liczba jest:  " << a << endl;
      cout << "Minimalna liczba jest:  " << b << endl;
      return 0;

    }
  else if (b > a)
    {
      cout << "Maksymalna liczba jest:  " << b << endl;
      cout << "Minimalna liczba jest:  " << a << endl;
      return 0;
    }
  else if (a = b)
    {
      cout << "Podane liczby maja taka sama wartosc. " << endl;
      return 0;
    }
}


