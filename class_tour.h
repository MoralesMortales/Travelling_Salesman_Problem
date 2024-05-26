#ifndef CLASS_TOUR_H
#define CLASS_TOUR_H

#include "class_problema.h"

class tour {

 private:
  
  problema PP;
  float c[2][100];
  int actual;

 public:
  tour() {}

  tour(problema pp, float cc[100]);

  void explorar();

  void mover();
};

#endif // CLASS_TOUR_H
