#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
class problema {
 protected:
  int n;
  int cities[100][100];  // 3dimensiones
  int nro_dimensions;

 public:
  problema() {}

  problema(int n_city, int n_dimensions);

  void insert_values(int d1[100][100]);

  int getn();
  int getdimensions();
  int get_cities();

  void show_cities();
};

class tour : protected problema {
  struct coords {
    int id;
    int x;
    int y;
    int z;
    bool used = false;
  };

 private:
  problema problem_tour;
  int configuracion[1];
  bool actual = true;
  coords city[100];

 public:
  tour() {}

  tour(problema a_problem);

  float costo(coords city1, coords city2);

  void show();

  void explora();

  void avanza();
};

using namespace std;

// TODO:

int main() {
  srand(time(NULL));

  int n_cities, n_dimensions;
  int dimensions[100][100];  // limite de coordenadas

  cout << "cantidad de ciudades: ";
  cin >> n_cities;
  cout << "cantidad de dimensiones (1-3)";
  cin >> n_dimensions;

  // FIXME: esto rellena todos los lugares, no es lo que queremos, queremos
  // solamente la cantidad de ciudades

  switch (n_dimensions) {
    case 1:
      for (int n_city = 0; n_city < n_cities; n_city++) {
        for (int n_dimensione = 0; n_dimensione < n_dimensions;
             n_dimensione++) {
          dimensions[n_city][n_dimensione] = rand() % 100;
        }
      }

      break;
    case 2:

      for (int n_city = 0; n_city < n_cities; n_city++) {
        for (int n_dimensione = 0; n_dimensione < n_dimensions;
             n_dimensione++) {
          dimensions[n_city][n_dimensione] = rand() % 100;
        }
      }

      break;

    case 3:
      for (int n_city = 0; n_city < n_cities; n_city++) {
        for (int n_dimensione = 0; n_dimensione < n_dimensions;
             n_dimensione++) {
          dimensions[n_city][n_dimensione] = rand() % 100;
        }
      }
      break;

    default:
      cout << "Error 101 \n";
      break;
  }

  problema Pais(n_cities, n_dimensions);

  Pais.insert_values(dimensions);

  Pais.show_cities();

  tour mitour(Pais);

  mitour.avanza();
  return 0;
}

problema::problema(int n_city, int n_dimensions) {
  n = n_city;
  nro_dimensions = n_dimensions;
}

void problema::insert_values(int d1[100][100]) {
  switch (nro_dimensions) {
    case 1:
      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          cities[n_city][n_dimensione] = d1[n_city][n_dimensione];
        }
      }

      break;
    case 2:

      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          cities[n_city][n_dimensione] = d1[n_city][n_dimensione];
        }
      }

      break;

    case 3:
      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          cities[n_city][n_dimensione] = d1[n_city][n_dimensione];
        }
      }
      break;
      // eliminar luego la cosa de abajo
    default:
      cout << "Error 101 \n";
      break;
  }
}

void problema::show_cities() {
  switch (nro_dimensions) {
    case 1:
      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          if (n_dimensione == 0) {
            cout << "In city " << n_city + 1
                 << ". x:" << cities[n_city][n_dimensione];
            cout << "\n";
          }
        }
      }

      break;
    case 2:

      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          if (n_dimensione == 0) {
            cout << "In city " << n_city + 1
                 << ". x:" << cities[n_city][n_dimensione];
          } else if (n_dimensione == 1) {
            cout << ". y:" << cities[n_city][n_dimensione];
            cout << "\n";
          }
        }
      }

      break;

    case 3:
      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          if (n_dimensione == 0) {
            cout << "In city " << n_city + 1
                 << ". x:" << cities[n_city][n_dimensione];
          } else if (n_dimensione == 1) {
            cout << ". y:" << cities[n_city][n_dimensione];
          } else if (n_dimensione == 2) {
            cout << ". z:" << cities[n_city][n_dimensione];
            cout << "\n";
          }
        }
      }
      break;

      // eliminar luego la cosa de abajo
    default:
      cout << "Error 101 \n";
      break;
  }
}

int problema::getn() { return n; }

int problema::getdimensions() { return nro_dimensions; }

tour::tour(problema a_problem) {
  problem_tour = a_problem;

  coords city[n];

  int counter = 0;

  switch (nro_dimensions) {
    case 1:
      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          if (n_dimensione == 0) {
            city[counter].y = cities[n_city][n_dimensione];
            city[counter].id = counter;
            counter++;
          }
        }
      }

      break;
    case 2:

      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          if (n_dimensione == 0) {
            city[counter].x = cities[n_city][n_dimensione];
            city[counter].id = counter;
            counter++;

          } else if (n_dimensione == 1) {
            city[counter].y = cities[n_city][n_dimensione];
            city[counter].id = counter;
            counter++;
          }
        }
      }

      break;

    case 3:
      for (int n_city = 0; n_city < n; n_city++) {
        for (int n_dimensione = 0; n_dimensione < nro_dimensions;
             n_dimensione++) {
          if (n_dimensione == 0) {
            city[counter].x = cities[n_city][n_dimensione];
            city[counter].id = counter;
            counter++;

          } else if (n_dimensione == 1) {
            city[counter].y = cities[n_city][n_dimensione];
            city[counter].id = counter;
            counter++;
          } else if (n_dimensione == 2) {
            city[counter].z = cities[n_city][n_dimensione];
            city[counter].id = counter;
            counter++;
          }
        }
      }
      break;
  }
}

float tour::costo(coords city1, coords city2) {
  switch (nro_dimensions) {
    case 1: {
      int counter = 0;
      int searcher_x = city1.x;

      while (searcher_x != city2.x) {
        counter++;

        if (searcher_x > city2.x) {
          searcher_x--;
        }

        else if (searcher_x < city2.x) {
          searcher_x++;
        }

        else if (searcher_x == city2.x) {
          break;
        }
      }
      searcher_x = counter;
      return searcher_x;
    } break;
    case 2: {
      int counter = 0;
      int searcher_x = city1.x;
      int searcher_y = city1.y;

      while (searcher_x != city2.x) {
        counter++;

        if (searcher_x > city2.x) {
          searcher_x--;
        }

        else if (searcher_x < city2.x) {
          searcher_x++;
        }

        else if (searcher_x == city2.x) {
          break;
        }
      }
      searcher_x = counter;

      counter = 0;

      while (searcher_y != city2.y) {
        counter++;

        if (searcher_y > city2.y) {
          searcher_y--;
        }

        else if (searcher_y < city2.y) {
          searcher_y++;
        }

        else if (searcher_y == city2.y) {
          break;
        }
      }

      searcher_y = counter;
      return searcher_x + searcher_y;
    } break;

    case 3: {
      for (int n_city = 0; n_city < n; n_city++) {
        int counter = 0;
        int searcher_x = city1.x;
        int searcher_y = city1.y;
        int searcher_z = city1.z;

        while (searcher_x != city2.x) {
          counter++;

          if (searcher_x > city2.x) {
            searcher_x--;
          }

          else if (searcher_x < city2.x) {
            searcher_x++;
          }

          else if (searcher_x == city2.x) {
            break;
          }
        }
        searcher_x = counter;

        counter = 0;

        while (searcher_y != city2.y) {
          counter++;

          if (searcher_y > city2.y) {
            searcher_y--;
          }

          else if (searcher_y < city2.y) {
            searcher_y++;
          }

          else if (searcher_y == city2.y) {
            break;
          }
        }

        searcher_y = counter;
        counter = 0;

        while (searcher_z != city2.z) {
          counter++;

          if (searcher_z > city2.z) {
            searcher_z--;
          }

          else if (searcher_z < city2.z) {
            searcher_z++;
          }

          else if (searcher_z == city2.z) {
            break;
          }
        }
        searcher_z = counter;
        return searcher_x + searcher_y + searcher_z;
      }
    } break;
  }
}

void tour::avanza() {
  cout << "empieza\n";
  bool finish = false;
  int counter = 0;
  while (finish == false) {
    counter++;
    int value = costo(city[counter], city[counter + 1]);

    for (int check = 0; check < n; check++) {
      if (costo(city[counter], city[check]) < value &&
          costo(city[counter], city[check]) != 0) {
        value = costo(city[counter], city[check]);
        city[n + 1] = city[check];
        cout << "En " << city[counter].id << " a " << city[check].id << " hay "
             << value << "\n";
      }
    }
    finish = true;
  }
}