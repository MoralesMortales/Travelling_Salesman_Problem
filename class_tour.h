#ifndef CLASS_TOUR_H
#define CLASS_TOUR_H

#include "city_struct.h"
#include "class_problema.h"

class tour {
 private:
  problema problem_tour;
  int configuracion[2][101];
  int actual = 1;

 public:
  tour() {}

  tour(problema a_problem);

  float costo;

  void show();

  void explora();

  void avanza();
};

#endif // CLASS_TOUR_H
