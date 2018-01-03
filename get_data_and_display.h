#include <stdio.h>
#include <stdlib.h>

#ifndef type_get_data_and_display_h
#define type_get_data_and_display_h


// Function gets the properties of the particle
// INPUT:
// par : the variable address which is stored the particle structure
// sim : the variable address which is stored the simulation structure
// OUTPUT:
// An integer to test the memory
int get_properties_particle(particle *par, simulation *sim);


// Function gets the properties of the particle
// INPUT:
// sim : the variable address which is stored the simulation structure
// OUTPUT:
// An integer to test the memory
int get_properties_simulation(simulation *sim);


#endif

