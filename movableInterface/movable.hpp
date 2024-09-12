#ifndef  __MOVABLE__
#define  __MOVABLE__

#include <iostream>

class Movable {
public:
	virtual	void move(int x, int y) = 0;
	virtual void stop() = 0;
	virtual ~Movable() = default;
};

#endif // __MOVABLE__
