

class IPerformer
{
public:
	virtual ~IPerformer(){};

	virtual void perform(unsigned complexity,  unsigned * res) = 0;
};
