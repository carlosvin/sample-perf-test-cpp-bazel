
#include "PerrinNumber.h"
#include <array>

using namespace std;

PerrinNumber::PerrinNumber() {}
PerrinNumber::~PerrinNumber() {}

unsigned PerrinNumber::perform(unsigned n)
{
	array<unsigned, 3> res {3, 0, 2};
	if (n < 3) {
		return res[n];
	}

	unsigned p;
	for (unsigned i=3; i <=n; i++) {
		p = res[0] + res[2]; 
        res[0] = res[1]; 
        res[1] = res[2]; 
		res[2] = p;
	}
	return p;
}
