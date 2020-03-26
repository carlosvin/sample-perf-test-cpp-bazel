
#ifndef PERRINNUMBER_H_
#define PERRINNUMBER_H_

#include "IPerformer.h"

class PerrinNumber: public IPerformer {
public:
	PerrinNumber();
	virtual ~PerrinNumber();

	virtual void perform(unsigned complexity,  unsigned * res);
	unsigned f(unsigned n, unsigned * res);

};

#endif /* PERRINNUMBER_H_ */
