{\rtf1\ansi\ansicpg1250\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 HelveticaNeue;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab560
\pard\pardeftab560\slleading20\partightenfactor0

\f0\fs26 \cf0 // Zadanie 2.1 - \
//autor: Rafal Ogrodniczak - WSB-NLU Student\
\
#include <iostream>\
\
using namespace std;\
\
\
int main ()\
\{\
  int x, y;\
\
  std::cout << "Podaj dwie liczby: " << std::endl;\
  std::cin >> x;\
  std::cin >> y;\
\
  x == y;\
  x = y;\
\
  std::cout << x << std::endl;\
  std::cout << y << std::endl;\
  \
  return 0;\
\}\
}