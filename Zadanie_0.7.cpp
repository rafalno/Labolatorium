{\rtf1\ansi\ansicpg1250\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab560
\pard\pardeftab560\slleading20\partightenfactor0

\f0\fs26 \cf0 // Zadanie 0.7 - \
//autor: Rafal Ogrodniczak - WSB-NLU Student\
\
#include <iostream>\
#include <cmath>\
\
using namespace std;\
int main ()\
\{\
  double a, b, przekatna;\
\
  cout << "Prosze poodac dwa boki prostokata: " << endl;\
  cout << "Bok nr 1: ";\
  cin >> a;\
  cout << "Bok nr 2: ";\
  cin >> b;\
    przekatna = sqrt ((a * a) + (b * b));\
\
  cout << "Dlugosc przekatnej prostokata wynosi " << przekatna << endl;\
  return 0;\
\}\
}