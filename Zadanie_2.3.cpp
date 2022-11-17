{\rtf1\ansi\ansicpg1250\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab560
\pard\pardeftab560\slleading20\partightenfactor0

\f0\fs26 \cf0 // Zadanie 2.3 - \
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
  float a, b, pole_prostokata;\
\
\
  cout << "Prosze o podanie dwoch bokow prostokata: " << endl;\
  cin >> a;\
  if (a <= 0.0000)\
    cout <<"Wprowadzona liczba jest nieprawidlowa. Prosze zaczac jeszcze raz. " << endl;\
  else\
    cin >> b;\
  if (b <= 0.0000)\
    cout << "Wprowadzona liczba jest nieprawidlowa. " << endl;\
  else\
\
\
    pole_prostokata = a * b;\
  cout << "Pole prostokata wynosi:  " << pole_prostokata << endl;\
\}}