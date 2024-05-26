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
  float coordenadas[1][100];  //x,y
  
  srand(time(0));

  for (int f = 0; f < n; f++) {
      coordenadas[0][f] = rand() % 10;
      coordenadas[1][f] = rand() % 10;
  }

for(int f = 0; f < n ; f++){
  cout<<coordenadas[0][f]<<" & "<<coordenadas[1][f]<<"\n";
}

problema P(7, coordenadas);

P.show();

  return 0;        
          }

