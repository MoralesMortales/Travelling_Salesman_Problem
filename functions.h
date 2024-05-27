#include <math.h>

#include <iostream>

#include "class_problema.h"
#include "class_tour.h"

problema::problema(int nn, float user_coordenates[2][100]) {
  n = nn;

  for (int i = 0; i < 2; i++) {
    for (int s = 0; s < n; s++) {
      coordenadas[i][s] = user_coordenates[i][s];
    }
  }
}

tour::tour(problema pp, float cc[100]) {
  bool actual;
  the_problem = pp;
  for (int i = 0; i < the_problem.getn(); i++)
  {
    c[actual][i] = i; //paso-n_city
  }
  
  c[2][100] = cc[100];
}

void tour::explorar() {

}

int problema::getn() { return n; }

float problema::distancia(int x, int y) { //they're taking the positions of the city 1 and the city 2 
  return sqrt(pow(coordenadas[0][x-1] - coordenadas[0][y-1], 2) +
              pow(coordenadas[1][x-1] - coordenadas[1][y-1], 2));
}

//FIXME:

void problema::show() {
  for (int s = 0; s < n; s++) {
    std::cout << "|" << s + 1 << "|";
  }

  std::cout << "\n";

  for (int i = 0; i < 2; i++) {
    for (int s = 0; s < n; s++) {
      std::cout << "|" << coordenadas[i][s] << "|";
    }
    std::cout << "\n";
  }
}
