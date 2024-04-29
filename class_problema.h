#include "city_struct.h"

#ifndef PROBLEMA_CLASS_H

#define PROBLEMA_CLASS_H


class problema {
 private:
  int n;

  cities city[100];

 public:
  problema() {}

  float distancia(int city_1, int city_2);

  int getId(struct cities);

  void push_n(int the_n);

  void insert_coordenadas(int in_x[], int in_y[]);

  int getn();

  void show_cities();
};

#endif // PROBLEMA_CLASS_H
