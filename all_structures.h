#include <stdio.h>
#include <stdlib.h>

#ifndef type_all_structures_h
#define type_all_structures_h

//structure for the Vector3D
typedef struct Vector3D{
	double x;
	double y;
	double z;
}vect3D;


//structure for the particle properties
typedef struct particle_properties{
	double r; //radius of the particle
	double m; //mass of the particle
	double e; //coefficient of restitution of the impact
	double phi; //coefficient of friction
}pp;


//structure for the simulation properties
typedef struct simulation_properties{
	double n; //number of particles
	double tf; //total simulation time
	double dt; //time step of the integration
}ps;


//the particle
typedef struct particle{
	vect3D pos_init; //initial position of the particle
	vect3D vit_init; //initial velocity of the particle

	vect3D pos; //current position
	vect3D vit; //current velocity
	vect3D acc; //current acceleration
	
	vect3D *position; //array position[] which will store each position of the particle over time
	
	vect3D gravity_f; //vector gravity
    	vect3D reaction_f; //reaction force vector
    	vect3D frictional_f; //friction force vector
    	vect3D impulse_f; //force vector due to the impact
    	vect3D sum_forces; //vector sum of the forces
    	
	pp p_par;
}particle;


//the simulation
typedef struct simulation{
	ps p_simu; //simulation properties
	int k; //time simulation
	char *filename; //character array for creating files .data
}simulation;


#endif
