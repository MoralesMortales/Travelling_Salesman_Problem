#include <ctime>
#include <iostream>
#include <string>

class problema {
 private:
  int n;
  int cities[100][100][100];
  int nro_dimensions;

 public:
  problema() {}

  problema(int n_city, int n_dimensions);

  void insert_values(int limit, int d1[100][100][100]);

  float distancia(int city_1, int city_2);

  int getId(struct cities);

  void push_n(int the_n);

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

// TODO:

int main() {
  srand(time(NULL));

  int n_cities, n_dimensions;
  int limit_coords = 100;

  int dimensions[100][100][100];  // limite de coordenadas

  cout << "cantidad de ciudades: ";
  cin >> n_cities;
  cout << "cantidad de dimensiones (1-3)";
  cin >> n_dimensions;

  // FIXME: esto rellena todos los lugares, no es lo que queremos, queremos
  // solamente la cantidad de ciudades

  // for (int f = 0; f < n_cities; f++) {
  //   switch (n_dimensions) {
  //     case 1:
  //       for (int f = 0; f < limit_coords; f++) {
  //         dimensions[f][0][0] = rand() % 100;
  //       }

  //       break;
  //     case 2:

  //       for (int f = 0; f < limit_coords; f++) {
  //         for (int s = 0; s < limit_coords; s++) {
  //           dimensions[f][s][0] = rand() % 100;
  //         }
  //       }

  //       break;

  //     case 3:
  //       for (int f = 0; f < limit_coords; f++) {
  //         for (int s = 0; s < limit_coords; s++) {
  //           for (int t = 0; t < limit_coords; t++) {
  //             dimensions[f][s][t] = rand() % 100;
  //           }
  //         }
  //       }
  //       break;

  //     default:
  //       cout << "Error 101 \n";
  //       break;
  //   }
  // }



  problema Pais(n_cities, n_dimensions);

  Pais.insert_values(limit_coords, dimensions);

  Pais.show_cities();

  return 0;
}

problema::problema(int n_city, int n_dimensions) {
  n = n_city;
  nro_dimensions = n_dimensions;
}

void problema::insert_values(int limit, int d1[100][100][100]) {
  for (int f = 0; f < n; f++) {
    switch (nro_dimensions) {
      case 1:
        for (int f = 0; f < limit; f++) {
          cities[f][0][0] = d1[f][0][0];
        }

        break;
      case 2:

        for (int f = 0; f < limit; f++) {
          for (int s = 0; s < limit; s++) {
            cities[f][s][0] = d1[f][s][0];
          }
        }

        break;

      case 3:
        for (int f = 0; f < limit; f++) {
          for (int s = 0; s < limit; s++) {
            for (int t = 0; t < limit; t++) {
              cities[f][s][t] = d1[f][s][t];
            }
          }
        }
        break;
    }
  }
}

void problema::show_cities() {
  switch (nro_dimensions) {
    case 1:
      for (int f = 0; f < n; f++) {
        cout << "En " << f << ". x:" << f << ". =" << cities[f][0][0] << "\n";
      }
      cout << "\n";

      break;
    case 2:

      for (int f = 0; f < n; f++) {
        for (int s = 0; s < n; s++) {
          cout << "En x:" << f << ". y:" << s << ". =" << cities[f][s][0]
               << "\n";
        }
      }
      cout << "\n";
      break;

    case 3:
      for (int f = 0; f < n; f++) {
        for (int s = 0; s < n; s++) {
          for (int t = 0; t < n; t++) {
            cout << "En x:" << f << ". y:" << s << ". z:" << t
                 << ". =" << cities[f][s][t] << "\n";
          }
        }
      }
      cout << "\n";

      break;
  }
}
