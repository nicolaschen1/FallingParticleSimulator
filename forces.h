#include <stdio.h>
#include <stdlib.h>

#ifndef type_forces_h
#define type_forces_h


// Function that calculates the components of the gravity
// INPUT:
// par : the variable address which is stored the particle structure
// OUTPUT:
// An integer to test the memory
int gravity_force(particle *par);


// Function that computes the vector components of the reaction force
// INPUT:
// par : the variable address which is stored the particle structure
// OUTPUT:
// An integer to test the memory
int reaction_force(particle *par);


// Function that computes the vector components of the frictional force
// INPUT:
// par : the variable address which is stored the particle structure
// OUTPUT:
// An integer to test the memory
int frictional_force(particle *par);


// Function that computes the vector components of the impulse force related to the impact
// INPUT:
// par : the variable address which is stored the particle structure
// sim : the variable address which is stored the simulation structure
// OUTPUT:
// An integer to test the memory
int impulse_force(particle *par, simulation *sim);


// Function that computes the sum of forces
// INPUT:
// pos : vect3D position
// vit : vect3D velocity
// par : the variable address which is stored the particle structure
// sim : the variable address which is stored the simulation structure
// OUTPUT:
// An integer to test the memory
int sum_all_forces(vect3D pos, vect3D vit, particle *par, simulation *sim);


#endif
