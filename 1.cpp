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

  cout << "Ingrese un numero de ciudades: ";
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

  cout << "Desea ver la distancia entre algunas ciudades? s/n: ";
  char opt_distanc;
  cin >> opt_distanc;

  if (opt_distanc == 's' || opt_distanc == 'S') {
    int city_1, city_2;
    cout << "Elija con cuales ciudades ciudades desea ver la distancia\nCiudad "
            "1: "
            "1: ";
    cin >> city_1;
    cout << "Ciudad 2: ";
    cin >> city_2;

    cout << "La distancia es de " << ciudad1.distancia(city_1, city_2) << "\n";
  }

  tour tour1(ciudad1);
  
  tour1.explora();
  

  cout << endl;

  cout << "Gracias por usar";

  return 0;
}