#pragma once
#ifndef creature_h
#define creature_h
#include "character.h"

class creature : public character {
public:
	creature(const std::string& name, size_t health, size_t strength);
	size_t health();
	size_t strength();

	void health(size_t health);
	void strength(size_t strength);

	friend std::ostream& operator<<(std::ostream& os, const creature& pl);
};
#endif // creature_h

