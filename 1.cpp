#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

struct cities {
  int id_city;
  int coordenate_x;
  int coordenate_y;
};

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

class tour {
 private:
  problema problem_tour;
  int configuracion[2][101];
  int actual;

 public:
  tour() {}

  tour(problema a_problem);

  float costo;

  void show();

  void explora();

  void avanza();
};

int main() {
  int n;
  cout << "Ingrese un numero de ciudades: " << endl;
  cin >> n;

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

  return 0;
}

//
//
//

tour::tour(problema a_problem) { problem_tour = a_problem; }

void tour::show() {}

void problema::push_n(int the_n) {
  n = the_n;

  cities city[100];
}

void problema::insert_coordenadas(int in_x[], int in_y[]) {
  for (int counter = 1; counter < n + 1; counter++) {
    cities_coordenates_in_x[counter] = in_x[counter];
    cities_coordenates_in_y[counter] = in_y[counter];
    city[counter].id_city = counter;
    city[counter].coordenate_x = in_x[counter];
    city[counter].coordenate_y = in_y[counter];
  }
}

int problema::getn() { return n; }

void problema::show_cities() {
  for (int counter = 1; counter < n + 1; counter++) {
    cout << "City id: " << city[counter].id_city
         << ". x: " << city[counter].coordenate_x
         << ". y: " << city[counter].coordenate_y << "\n\n";
  }
}