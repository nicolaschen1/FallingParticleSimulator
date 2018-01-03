CC_FLAGS = -Wall -g
EXEC = particles_simulator

all : $(EXEC)

calculate_position.o : calculate_position.c calculate_position.h
	gcc -c $(CC_FLAGS) calculate_position.c
	
forces.o : forces.c forces.h
	gcc -c ${CC_FLAGS} forces.c
	
position_velocity_initialization.o : position_velocity_initialization.c position_velocity_initialization.h 
	gcc -c ${CC_FLAGS} position_velocity_initialization.c
	
get_data_and_display.o : get_data_and_display.c get_data_and_display.h
	gcc -c ${CC_FLAGS} get_data_and_display.c

allocation_deallocation.o : allocation_deallocation.c allocation_deallocation.h
	gcc -c ${CC_FLAGS} allocation_deallocation.c
	 	
zeroForces.o : zeroForces.c zeroForces.h
	gcc -c ${CC_FLAGS} zeroForces.c
	
main.o : main.c all_structures.h calculate_position.h forces.h position_velocity_initialization.h get_data_and_display.h allocation_deallocation.h zeroForces.h
	gcc -c ${CC_FLAGS} main.c
	
$(EXEC) : calculate_position.o forces.o position_velocity_initialization.o get_data_and_display.o allocation_deallocation.o zeroForces.o main.o  
	gcc  ${CC_FLAGS} -o  $(EXEC) calculate_position.o forces.o position_velocity_initialization.o get_data_and_display.o allocation_deallocation.o zeroForces.o main.o

clean :
	rm -f *.o $(EXEC) *~

