#pragma once
#ifndef player_h
#define player_h
#include "character.h"

class player : public character {
public:
	player(const std::string& name, size_t health, size_t strength);
	size_t health();
	size_t strength();

	void health(size_t health);
	void strength(size_t strength);

	friend std::ostream& operator<<(std::ostream& os, const player& pl);
};
#endif // !player_h

