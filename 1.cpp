#include <ctime>
#include <iostream>
#include <string>

class problema {
 private:
  int n;

 public:
  problema() {}

  float distancia(int city_1, int city_2);

  int getId(struct cities);

  void push_n(int the_n);

  void insert_coordenadas(int in_x[], int in_y[]);

  int getn();

  void show_cities();
};

class tour {

 private:
  problema problem_tour;
  int configuracion[1][101];
  bool actual = true;

 public:
  tour() {}

  tour(problema a_problem);

  float costo;

  void show();

  void explora();

  void avanza();
};

using namespace std;

int main() {
  
	int n;

  return 0;
}
