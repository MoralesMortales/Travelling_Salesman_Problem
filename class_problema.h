#ifndef PROBLEMA_CLASS_H

#define PROBLEMA_CLASS_H

class problema {
  private:
  int n;
  float coordenadas[3][100];

 public:
  problema() {}
  problema(int nn, float user_coordenates[3][100]);

  float distancia(int x, int y);

  int getn();

  void show();
};

#endif // PROBLEMA_CLASS_H
