// Zadanie 2.10 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>  

using namespace std ; 


int main () 
{ 
    int dzien_tygodnia;

   cout << "Podaj numer dnia tygodnia:  "<< endl;
   cin >> dzien_tygodnia; 

   switch (dzien_tygodnia)
   {
   case 1: 
   cout  << "Poniedzialek"; break;
   
   case 2: 
   cout  << "Wtorek"; break;
   
   case 3: 
   cout  << "Sroda"; break;
   
   case 4: 
   cout  << "Czwartek"; break;
   
   case 5: 
   cout  << "Piatek"; break;
   
   case 6: 
   cout  << "Sobota"; break;
   
   case 7: 
   cout  << "Niedziela"; break;
    
   
   default:
   cout << "Bledny numer." << endl;
    break;
   }


return 0;
}

