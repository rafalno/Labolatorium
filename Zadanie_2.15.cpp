//Exercise 2.14. Napisz program, który drukuje kwadraty liczb zmienno- przecinkowych od 
//a = 1.0 do b = 2.0 w krokach co d = 0.1.

//Exercise 2.15. Zmodyfikuj program z zadania 2.14, aby użytkownik mógł po- dać a, b i d.

#include <iostream> 
#include <cmath>

using namespace std ;


int main ()
{
    
    float a, b, c;
    
    cout << "Prosze o podanie parametrow. Pamietaj ze musza to byc liczby zmiennoprzecinkowe " << endl;

    cout << "Program zacznie sie od liczby :  "; cin >> a;
    cout << "Program zatrzyma sie na liczbie :  "; cin >> b;
    cout << "Program wykona sie w krokach co:  "; cin >> c;

for (float i=a; i<b; i+=c)
{
cout << "Pierwiastek z " << i;
cout << " wynosi " << i*i << "\n"; 

}
   
}
