#include <iostream>
#include "class_problema.h"
#include "class_tour.h"
#include <math.h>


problema::problema(int nn, float user_coordenates[1][100]){

    for(int asign_values = 0; asign_values < nn; asign_values++){
        coordenadas[0][asign_values] = user_coordenates[0][asign_values];
        coordenadas[1][asign_values] = user_coordenates[1][asign_values];
    }

n = nn;
}

tour::tour(problema pp, float cc[100]){
actual = 0;
PP=pp;
c[2][100] = cc[100];
}

int problema::getn(){
return n;
}

float problema::distancia(int x, int y){
return sqrt(pow(coordenadas[0][x]-coordenadas[0][y],2) + pow(coordenadas[1][x]-coordenadas[1][y],2));
}

void tour::explorar(){
int x=1;
int y=1;
int temp;

while (x=y){
x=rand()%7;
y=rand()%7;}
for(int i=1;i<7;i++){
c[actual][i];
}

c[!actual][x] = c[!actual][temp];
c[!actual][y] = c[!actual][x];
c[!actual][y] = c[!actual][temp];
}

void problema::show(){ 
    
for(int i=0; i<n; i++){
    std::cout<<"\n"<<i+1<<":\n|x| - "<<coordenadas[0][i]<<"\n";
    std::cout<<"|y| - "<<coordenadas[1][i];
}

}
