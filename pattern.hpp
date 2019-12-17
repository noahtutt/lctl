// abstract pattern class
// clients will implement this class

#include <cstddef>

#include "rgb.hpp"

class pattern {

public:

	explicit pattern(size_t);
	
	void next_iteration();	

	virtual rgb get_value_at(size_t) = 0;	

private:

	size_t iteration;
	size_t size;
};
