// Zadanie 2.10 - 
//autor: Rafal Ogrodniczak - WSB-NLU Student

#include <iostream>  

using namespace std ; 


int main () 
{ 
    int dzien_tygodnia;

   cout << "Podaj numer miesiaca:  "<< endl;
   cin >> miesiac; 

   switch (miesiac)
   {
   case 1: 
   cout  << "Styczen"; break;
   
   case 2: 
   cout  << "Luty"; break;
   
   case 3: 
   cout  << "Marczec"; break;
   
   case 4: 
   cout  << "Kwiecien"; break;
   
   case 5: 
   cout  << "Maj"; break;
   
   case 6: 
   cout  << "Czerwiec"; break;
   
   case 7: 
   cout  << "Lipiec"; break;

   case 8: 
   cout  << "Sierpien"; break;

   case 9: 
   cout  << "Wrzesien"; break;

   case 10: 
   cout  << "Pazdziernik"; break;

   case 11: 
   cout  << "Listopad"; break;

   case 12: 
   cout  << "Grudzien"; break;
    
   
   default:
   cout << "Bledny numer." << endl;
    break;
   }


return 0;
}

