// Zadanie 2.3 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>

using namespace std;


int
main ()
{
  float a, b, pole_prostokata;


  cout << "Prosze o podanie dwoch bokow prostokata: " << endl;
  cin >> a;
  if (a <= 0.0000)
    cout <<"Wprowadzona liczba jest nieprawidlowa. Prosze zaczac jeszcze raz. " << endl;
  else
    cin >> b;
  if (b <= 0.0000)
    cout << "Wprowadzona liczba jest nieprawidlowa. " << endl;
  else


    pole_prostokata = a * b;
  cout << "Pole prostokata wynosi:  " << pole_prostokata << endl;
}