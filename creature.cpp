#include "creature.h"

creature::creature(const std::string& name, size_t health, size_t strength) :
	character(name, health, strength) {}
size_t creature::strength() { return strength_;}
size_t creature::health() { return health_; }

void creature::strength(size_t strength) { strength_ = strength; }
void creature::health(size_t health) { health_ = health; }

std::ostream& operator<<(std::ostream& os, const creature& cr) {
	return os << dynamic_cast<const character&>(cr);
}

