// implementation for abstract pattern class

#include "pattern.hpp"

pattern::pattern(size_t s) : iteration(0), size(s) { }

pattern::next_iteration() {
	++iteration;
}
