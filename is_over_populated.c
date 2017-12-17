#include "is_over_populated.h"

bool is_over_populated(uint8_t num_neighbours){

	if(num_neighbours > 3) return 1;
	return 0;
}

