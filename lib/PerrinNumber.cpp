
#include "PerrinNumber.h"
#include <string.h>

PerrinNumber::PerrinNumber() {}

PerrinNumber::~PerrinNumber() {}

void PerrinNumber::perform(unsigned complexity,  unsigned * res)
{
	memset(res, 0, complexity*sizeof(unsigned));
	res[0] = 3;
	res[2] = 2;
	f(complexity-1, res);
}

unsigned PerrinNumber::f(unsigned n, unsigned *res ){
	if (n > 2 && res[n] == 0){
		res[n] = f(n-2, res) + f(n-3, res);
	}
	return res[n];
}
