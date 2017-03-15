#include "Statemachine.h"
#include "Elevmodule.h"
#include <stdio.h>

int main() {
	if (!elev_init()) {
        printf("Unable to initialize elevator hardware!\n");
        return 1;
    }
	
    elevator_init(); 
    
    while (1) {
		run_elevator(); 
	}
	return 0;
};