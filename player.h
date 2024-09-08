#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"
#include <iostream>

class Player : public Entity {
private:
	std::string P_name;
	int P_level;
protected:

public:
	Player(std::string name = "游客", int level = 0, std::string typeName = "玩家") :
		Entity::Entity(typeName), P_name(name), P_level(level) {};
	~Player() {};
	// ---
	void outputInfo() override ;
};

#endif
