{\rtf1\ansi\ansicpg1250\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab560
\pard\pardeftab560\slleading20\partightenfactor0

\f0\fs26 \cf0 // Zadanie 2.8 - \
//autor: Rafal Ogrodniczak - WSB-NLU Student\
\
#include <iostream>\
\
using namespace std;\
\
\
int main ()\
\{\
  float a, b;\
  cout << "Podaj liczbe a" << endl;\
  cin >> a;\
  cout << "Podaj liczbe b" << endl;\
  cin >> b;\
\
  if (a > b)\
    \{\
      cout << "Maksymalna liczba jest:  " << a << endl;\
      cout << "Minimalna liczba jest:  " << b << endl;\
      return 0;\
\
    \}\
  else if (b > a)\
    \{\
      cout << "Maksymalna liczba jest:  " << b << endl;\
      cout << "Minimalna liczba jest:  " << a << endl;\
      return 0;\
    \}\
  else if (a = b)\
    \{\
      cout << "Podane liczby maja taka sama wartosc. " << endl;\
      return 0;\
    \}\
\
\
\}\
}