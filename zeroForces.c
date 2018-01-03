#include <stdio.h>
#include <stdlib.h>
#include "all_structures.h"


//unction resets the forces except the gravity
int zeroForces(particle *par){    
	if(par !=NULL){ 
	    	par->reaction_f.x = 0.;
	    	par->reaction_f.y = 0.;
	    	par->reaction_f.z = 0.;

	    	par->frictional_f.x = 0.;
	    	par->frictional_f.y = 0.;
	    	par->frictional_f.z = 0.;

	    	par->impulse_f.x = 0.;
	    	par->impulse_f.y = 0.;
	    	par->impulse_f.z = 0.;	

	    	par->sum_forces.x = 0.;
	    	par->sum_forces.y = 0.;
	    	par->sum_forces.z = 0.;

        	return 0;
    	}

    	return -1;
}
