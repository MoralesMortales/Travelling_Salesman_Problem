#include "city_struct.h"

#ifndef PROBLEMA_CLASS_H

#define PROBLEMA_CLASS_H


class problema {
 private:
  int n;

  cities city[100];

  int cities_coordenates[50 + 1][50 + 1];

  int cities_coordenates_in_x[50 + 1];

  int cities_coordenates_in_y[50 + 1];

 public:
  problema() {}

  float distancia(int i, int j);

  void push_n(int the_n);

  void insert_coordenadas(int in_x[], int in_y[]);

  int getn();

  void show_cities();
};

#endif // PROBLEMA_CLASS_H
