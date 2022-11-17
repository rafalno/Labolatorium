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
int\
main ()\
\{\
  float a, a1;\
  cout << "Podaj liczbe" << endl;\
  cin >> a;\
\
  if (a < 0)\
    \{\
      a1 = a * (-1);\
      cout << "Wartosc bezwzgledna podanej liczby wynosi: " << a1 << endl;\
      return 0;\
\
    \}\
  else\
\
    cout << "Wartosc bezwzgledna podanej liczby wynosi: " << a << endl;\
  return 0;\
\}}