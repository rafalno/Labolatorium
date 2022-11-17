// Zadanie 2.10 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>  

using namespace std ; 


int main () 
{ 
    int numer_miesiaca ;

   cout << "Podaj numer miesiaca:  "<< endl;
   cin >> numer_miesiaca; 

   switch (numer_miesiaca)
   {
   case 1: case 3: case 5: case 7: case 9: case 11:
   cout  << "Miesiac ma 31 dni."; break;
   
   case 2: 
   cout  << "Miesiac ma 28 dni"; break;
   
   case 4: case 6: case 8: case 10: case 12: 
   cout  << "Miesiac ma 30 dni"; break;
   
   
   
   default:
   cout << "Bledny numer miesiaca. Rok ma 12 miesiecy." << endl;
    break;
   }


return 0;
}

