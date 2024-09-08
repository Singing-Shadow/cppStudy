#include <iostream>
#include <vector>
#include <string>
#include "player.h"

int main() {
	Player user("勇者");
	std::cout << user.getTypeName() << std::endl;
	user.outputInfo();
	return 0;
}
