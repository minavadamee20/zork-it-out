
#include "player.h"

player::player(const std::string& name, size_t health, size_t strength) :
	character(name, health, strength) {}

size_t player::health() { return health_; }
size_t player::strength() { return strength_; }

void player::health(size_t health) { health_ = health;}
void player::strength(size_t strength) { strength_ = strength; }

std::ostream& operator<<(std::ostream& os, const player& pl) {
	return os << dynamic_cast<const character&>(pl);
}