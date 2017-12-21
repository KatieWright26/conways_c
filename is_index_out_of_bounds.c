#include "is_index_out_of_bounds.h"

bool is_index_out_of_bounds(int16_t index, uint16_t array_length){
	if(index < 0 || index >= array_length) return 1;
	return 0;
}
