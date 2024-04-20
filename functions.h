#include <iostream>

#include "city_struct.h"
#include "class_problema.h"
#include "class_tour.h"

tour::tour(problema a_problem) { problem_tour = a_problem; }

void tour::show() {}

void problema::push_n(int the_n) {
  n = the_n;

  cities city[100];
}

void problema::insert_coordenadas(int in_x[], int in_y[]) {
  for (int counter = 1; counter < n + 1; counter++) {
    city[counter].id_city = counter;
    city[counter].coordenate_x = in_x[counter];
    city[counter].coordenate_y = in_y[counter];
  }
}

int problema::getn() { return n; }

void problema::show_cities() {
  for (int counter = 1; counter < n + 1; counter++) {
    std::cout << "City id: " << city[counter].id_city
              << ". x: " << city[counter].coordenate_x
              << ". y: " << city[counter].coordenate_y << "\n\n";
  }
}

float problema::distancia(int city_1, int city_2) {
  cities city_temp_1 = city[city_1];
  cities city_temp_2 = city[city_2];

  int searcher_x = city_temp_1.coordenate_x;
  int searcher_y = city_temp_1.coordenate_y;
  int counter = 0;

  while (searcher_x != city_temp_2.coordenate_x) {
    counter++;

    if (searcher_x >  city_temp_2.coordenate_x) {
      searcher_x--;
    }

    else if (searcher_x < city_temp_2.coordenate_x) {
     searcher_x++;
    }

    else if (searcher_x == city_temp_2.coordenate_x) {
      break;
    }

  }

  return counter;
}
