#ifndef ENTITY_H
#define ENTITY_H

#include "base.h"
#include <string>

class Entity : public Base {
private:
	std::string E_typeName;
protected:

public:
	Entity(const std::string typeName) : Base::Base(), E_typeName(typeName) {};
	virtual ~Entity() {};
	// ---
	std::string getTypeName() {
		return E_typeName;
	}
};

#endif
