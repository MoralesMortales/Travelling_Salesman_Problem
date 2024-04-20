#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

#include "city_struct.h"
#include "class_problema.h"
#include "class_tour.h"
#include "functions.h"

using namespace std;

int main() {
  int n;
  cout << "Ingrese un numero de caiudades: ";
  cin >> n;
  cout << "\n";

  srand(time(NULL));

  int on_x[100];
  int on_y[100];

  for (int i = 1; i < n + 1; i++) {
    on_x[i] = rand() % 50 + 1;
    on_y[i] = rand() % 50 + 1;
  }

  problema ciudad1;

  ciudad1.push_n(n);
  ciudad1.insert_coordenadas(on_x, on_y);
  ciudad1.show_cities();
  cout<<ciudad1.distancia(1,2);

  return 0;
}