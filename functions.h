#include <math.h>

#include <iostream>

#include "class_problema.h"
#include "class_tour.h"

problema::problema(int nn, float user_coordenates[3][100]) {
  n = nn;

  for (int i = 0; i < 3; i++) {
    for (int s = 0; s < n; s++) {
      coordenadas[i][s] = user_coordenates[i][s];
    }
  }
}

tour::tour(problema pp, float n) {
  bool actual = false;
  the_problem = pp;
  for (int i = 0; i < n; i++) {
    ordenamiento[actual][i] = i;
  }
}

void tour::explorar() {
//   bool visited[the_problem.getn()];

//   for (int i = 0; i < the_problem.getn(); i++) {
//     visited[i] = false;
//   }

//   visited[0] = true;

//   for (int i = 1; i < the_problem.getn(); i++) {
//     int last = ordenamiento[actual][i - 1];
//     int next = 0;
//     float best_dist = the_problem.getn() + 1;

//     for (int j = 0; j < the_problem.getn(); j++) {
//       if (!visited[j]) {  
//         float dist = the_problem.distancia(last, j);

//         if (dist < best_dist) {  
//           next = j;
//           best_dist = dist;
//         }
//       }
//     }

// for (int nn = 0; nn < the_problem.getn(); nn++)
// {
//     ordenamiento[!actual][nn] = ordenamiento[actual][nn];
// }

//     ordenamiento[actual][i] = next;
//     visited[next] = true;
//   }
}

float tour::costo() {

// float the_costo;

// for (int i = 0; i < the_problem.getn(); i++)
// {
//   if (i == the_problem.getn() -1)
//   {
//     continue;
//   }
//   else
//   {
    
// the_costo += the_problem.distancia(i,i+1);
//   }
// }
  // return the_costo;
}

void tour::show_ordenamiento() {
  for (int i = 0; i < the_problem.getn(); i++) {
    std::cout << "|" << ordenamiento[actual][i] + 1 << "|";
  }
  std::cout << "\n";
}

int problema::getn() { return n; }

float problema::distancia(
    int x,
    int y) {  // they're taking the positions of the city 1 and the city 2
  return sqrt(pow(coordenadas[0][x - 1] - coordenadas[0][y - 1], 2) +
              pow(coordenadas[1][x - 1] - coordenadas[1][y - 1], 2));
}

// FIXME:

void problema::show() {
  for (int i = 0; i < 3; i++) {
    for (int s = 0; s < n; s++) {
      std::cout << "|" << coordenadas[i][s] << "|";
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}
