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
  float coordenadas[2][100];  //x,y
  
  srand(time(0));

  for (int f = 0; f < n; f++) {
    for (int i = 0; i < 2; i++)
    {
      coordenadas[i][f] = rand() % 10;
    }
  }

cout<<"\nThere are "<<n<<" cities\n";

problema P(7, coordenadas);

P.show();



std::cout<<P.distancia(2,4)<<" km\n";

  return 0;        
          }

