

#include <vector>

class IPerformer
{
public:
	virtual ~IPerformer() = default;

	virtual unsigned perform(unsigned n) = 0;
};
