#ifndef  __ROBOT__
#define  __ROBOT__

#include "movable.hpp"

class Robot : public Movable {
public:
	void move(int x, int y) override;
	void stop() override;
};

#endif // __ROBOT__
