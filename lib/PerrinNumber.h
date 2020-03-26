
#ifndef PERRINNUMBER_H_
#define PERRINNUMBER_H_

#include "IPerformer.h"

class PerrinNumber: public IPerformer {
public:
	PerrinNumber();
	virtual ~PerrinNumber();

	virtual unsigned perform(unsigned n);


};

#endif /* PERRINNUMBER_H_ */
