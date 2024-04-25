#include <iostream>
#include <cmath>
#include "city_struct.h"
#include "class_problema.h"
#include "class_tour.h"

tour::tour(problema a_problem) { problem_tour = a_problem; }

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

    if (searcher_x > city_temp_2.coordenate_x) {
      searcher_x--;
    }

    else if (searcher_x < city_temp_2.coordenate_x) {
      searcher_x++;
    }

    else if (searcher_x == city_temp_2.coordenate_x) {
      break;
    }
  }

  searcher_x = counter;

  counter = 0;

  while (searcher_y != city_temp_2.coordenate_y) {
    counter++;

    if (searcher_y > city_temp_2.coordenate_y) {
      searcher_y--;
    }

    else if (searcher_y < city_temp_2.coordenate_y) {
      searcher_y++;
    }

    else if (searcher_y == city_temp_2.coordenate_y) {
      break;
    }
  }

  searcher_y = counter;

  float sum = sqrt((searcher_x*searcher_x) + (searcher_y*searcher_y));
  
  return sum;
}

void tour::explora() {
  bool possibilities = true;

int counter = 0;
int counter_sta = 0;

  do {
    configuracion[actual][problem_tour.getn()];

    counter++;
    counter_sta++;
    for (int f = 2; f <= problem_tour.getn() + 1; f++)    
  if (problem_tour.distancia(counter,counter_sta) < problem_tour.distancia(counter,f))
  {
    configuracion[!actual][f-1] =  problem_tour.distancia(counter,counter_sta);
  }
  
  } while (counter_sta != problem_tour.getn() + 1);

  for (int o = 1; o < problem_tour.getn() + 1; o++)
  {
    std::cout<<configuracion[actual][o]<<std::endl;
    !actual;
  }
  
}
