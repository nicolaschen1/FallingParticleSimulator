#include <stdio.h>
#include <stdlib.h>

#ifndef type_position_velocity_initialization_h
#define type_position_velocity_initialization_h

// Function initializes the speed and position of the particle
// INPUT:
// par : the variable address which is stored the particle structure
// sim : the variable address which is stored the simulation structure
// OUTPUT:
// An integer to test the error of memory
int initialization(particle *par, simulation *sim);


#endif


