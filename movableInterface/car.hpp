#ifndef  __CAR__
#define  __CAR__

#include "movable.hpp"

class Car : public Movable {
public:
	void move(int x, int y) override;
	void stop() override;
};

#endif // __CAR__
