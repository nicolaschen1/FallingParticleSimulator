#include <stdio.h>
#include <stdlib.h>
#include "all_structures.h"

//we ask to the user to initialize the position and the velocity of the particle
int initialization(particle *par, simulation *sim){
	int i;
	if(par != NULL){
		for(i = 0 ; i < sim->p_simu.n ; i++){
            printf("\n\nEnter the initial position x of the particle %d:", i+1);
            scanf("%lf", &(par[i].pos_init.x));
            printf("Enter the initial position y of the particle %d:", i+1);
            scanf("%lf", &(par[i].pos_init.y));
            printf("Enter the initial position z of the particle %d:", i+1);
            scanf("%lf", &(par[i].pos_init.z));

            printf("Enter the initial velocity Vx of the particle %d:", i+1);
            scanf("%lf", &(par[i].vit_init.x));
            printf("Enter the initial velocity Vy of the particle %d:", i+1);
            scanf("%lf", &(par[i].vit_init.y));
            printf("Enter the initial velocity Vz of the particle %d:", i+1);
            scanf("%lf", &(par[i].vit_init.z));            		           		
		}
		return 0;
   	}
   	return -1;
}
