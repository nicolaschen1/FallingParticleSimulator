/********************************************************
FPS - Falling Particle Simulator

Description: The Falling Particles Simulator (FPS) is a 
program to visualize the evolution in time of the rigid 
spherical particles fall.

Author: Nicolas Chen
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "all_structures.h"
#include "position_velocity_initialization.h"
#include "get_data_and_display.h"
#include "forces.h"
#include "calculate_position.h"
#include "allocation_deallocation.h"


int main(){
	
	//Structures
    particle *part = NULL;//array of particles
    simulation simulation_particle;


/************************* INPUT AND DISPLAY *****************************/
        
	//gets and displays the properties of the simulation of the particle
    if(get_properties_simulation(&simulation_particle) == -1){
       	printf("Memory error.\n");
       	return 0;
    }
        
        
	//it allocates memory for the array of particle
	part = (particle *) malloc(sizeof(particle) * simulation_particle.p_simu.n); 
	if (part == NULL){
		printf("Memory error.\n");
		return 0;
	}    	
		
	
	//get and display the properties of the particle
	if(get_properties_particle(&(*part), &simulation_particle) == -1){
		printf("Memory error.\n");
		return 0;
	}


	//initialization of the position and velocity of the particle
	if(initialization(&(*part), &simulation_particle) == -1){
		printf("Memory error.\n");
		return 0;
	}


/****************** POSITION COMPUTING *************************/
 
	//computes the position of the particle
	if(calculate_position(&(*part), &simulation_particle) == -1){
		printf("Memory error.\n");
		return 0;
	}
		

	//frees the memory for the array of particles
	free(part);
	
/**************************** END OF COMPUTING ******************************/	

	printf("\n\nEnd of positions computing, run gnuplot\n");
	printf("and type load 'positions.plt' to display the trajectory of each particle\n\n");	

    return 0;
}
