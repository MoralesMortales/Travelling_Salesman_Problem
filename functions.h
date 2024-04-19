#include "city_struct.h"
#include "class_problema.h"
#include "class_tour.h"
#include <iostream>

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
    std::cout << "City id: " << city[counter].id_city
         << ". x: " << city[counter].coordenate_x
         << ". y: " << city[counter].coordenate_y << "\n\n";
  }
}