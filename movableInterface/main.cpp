#include <vector>
#include "movable.hpp"
#include "robot.hpp"
#include "car.hpp"

int main() {
	Car car;
	Robot robot;

	std::vector<Movable*> move;
	move.push_back(&car);
	move.push_back(&robot);
	
	for(int i = 0; i < move.size(); ++i) {
		move[i]->move(11, 20);
		move[i]->stop();
	}

	return 0;
}
