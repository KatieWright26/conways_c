#include "is_under_populated.h"

bool is_under_populated(uint8_t num_neighbours){
	if(num_neighbours < 2) return 1;
	return 0;
}
