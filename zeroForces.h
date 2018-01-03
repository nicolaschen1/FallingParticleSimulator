#include <stdio.h>
#include <stdlib.h>

#ifndef type_zeroForces_h
#define type_zeroForces_h


// Function resets the forces except the gravity
// INPUT:
// par : the variable address which is stored the particle structure
// OUTPUT:
// An integer to test the memory
int zeroForces(particle *par);


#endif
