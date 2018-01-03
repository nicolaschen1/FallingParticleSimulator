#include <stdio.h>
#include <stdlib.h>
#include "all_structures.h"


//function that computes the components of the force of gravity
int gravity_force(particle *par){
	double g = 9.81; //gravity of Earth

    	if(par != NULL){ 
        	par->gravity_f.x = 0;
          	par->gravity_f.y = 0;
          	par->gravity_f.z = -(par->p_par.m) * g;  

          	return 0;
    	}
    	return -1;
}


//function that computes the components of the reaction force
int reaction_force(particle *par){
	double g = 9.81; 
	
    	if(par != NULL){  
        	par->reaction_f.x = 0;
          	par->reaction_f.y = 0;
          	par->reaction_f.z = par->p_par.m * g;                    	

          	return 0;
    	}
    	return -1;
}


//function that computes the components of the frictional force
int frictional_force(particle *par){
	double g = 9.81; 
    
    	if(par != NULL){	  
          	par->frictional_f.x = -par->p_par.phi * par->vit.x * par->p_par.m * g;
          	par->frictional_f.y = -par->p_par.phi * par->vit.y * par->p_par.m * g;
          	par->frictional_f.z = 0;	  	
			
          	return 0;
    }
    return -1;
}


//function that computes the components of the impulse force
int impulse_force(particle *par, simulation *sim){
	if(sim != NULL && par != NULL){
        	if(par->vit.z > 0){
            		par->impulse_f.x = 0;
            		par->impulse_f.y = 0;
            		par->impulse_f.z = 0;
        	}
        	else{
            		par->impulse_f.x = 0;
            		par->impulse_f.y = 0;
            		par->impulse_f.z = -(par->p_par.m * (par->p_par.e + 1.) * par->vit.z) / (sim->p_simu.dt);
        	} 	
          	return 0;
    	}
    	return -1;
}


//function that makes the sum of all forces
int sum_all_forces(vect3D pos, vect3D vit, particle *par, simulation *sim){   
	int i;
    	if(par !=NULL && sim != NULL){ 
    		for(i=0 ; i < sim->p_simu.n ; i++ ){
    			//components of sum_forces
        		par->sum_forces.x = par->gravity_f.x + par->reaction_f.x + par->frictional_f.x + par->impulse_f.x;
        		par->sum_forces.y = par->gravity_f.y + par->reaction_f.y + par->frictional_f.y + par->impulse_f.y;
        		par->sum_forces.z = par->gravity_f.z + par->reaction_f.z + par->frictional_f.z + par->impulse_f.z;            		
		}
        return 0;
    	}
    return -1;
}
