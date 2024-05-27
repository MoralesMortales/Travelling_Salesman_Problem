#ifndef CLASS_TOUR_H
#define CLASS_TOUR_H

#include "class_problema.h"

class tour {

 private:
  
  problema the_problem;
  float ordenamiento[3][100];
  int actual;

 public:
  tour() {}

  tour(problema the_problem, float n);

  void explorar();

  float costo();

  void mover();

  void show_ordenamiento();
};

#endif // CLASS_TOUR_H
