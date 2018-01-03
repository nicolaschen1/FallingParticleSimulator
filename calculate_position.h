#include <stdio.h>
#include <stdlib.h>

#ifndef type_calculate_position_h
#define type_calculate_position_h


// Function which calculates the position of the particle each time of the integrator
// INPUT:
// par : the variable address which is stored the particle structure
// sim : the variable address which is stored the simulation structure
// OUTPUT:
// An integer that can test if there is an error of memory
int calculate_position(particle *par, simulation *sim);


#endif

