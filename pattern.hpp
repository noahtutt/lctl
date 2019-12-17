// abstract pattern class
// clients will implement this class

#include <cstddef>

#include "rgb.hpp"

class pattern {

public:

	explicit pattern(size_t);
	
	// ticks to the next iteration of updates
	void next_iteration();	

	// gets the rgb value at a given position for this iteration
	virtual rgb get_value_at(size_t) = 0;	

protected:

	size_t iteration;
	size_t size;
};
