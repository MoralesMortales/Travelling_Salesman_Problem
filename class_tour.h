#ifndef CLASS_TOUR_H
#define CLASS_TOUR_H

#include "class_problema.h"

class tour {

 private:
  
  problema the_problem;
  float c[2][100];
  int actual;

 public:
  tour() {}

  tour(problema the_problem, float cc[100]);

  void explorar();

  void mover();
};

#endif // CLASS_TOUR_H
