#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

#include "class_problema.h"
#include "class_tour.h"
#include "functions.h"

using namespace std;

int main() {
  int n = 7;
  float coordenadas[3][100];  // x,y

  srand(time(0));

  for (int i = 0; i < 3; i++) {
    for (int f = 0; f < n; f++) {
      if (i == 0) {
        coordenadas[i][f] = f + 1;
      }
      else{
      coordenadas[i][f] = rand() % 10;
    }
    }
  }

cout << "\nThere are " << n << " cities\n";

problema P(7, coordenadas);

P.show();

tour the_tour(P,n);

std::cout<<"costo:"<<the_tour.costo()<<"\n";

the_tour.explorar();

the_tour.show_ordenamiento();

std::cout<<"costo:"<<the_tour.costo();

return 0;
}
