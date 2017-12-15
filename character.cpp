#include "character.h"
#include "weapons.h"
#include <iostream>

character::character(const std::string& name, size_t health, size_t strength) : gameObject(name),
	health_(health), strength_(strength) {}

void character::attackwith(const weapons* w, character* cr) {

	std::cout << std::endl << "You have attacked " << cr->name() << " with your " << w->desc() << std::endl;
	if (w->damage() > health_) { health_ = 0; }
	else
	{
		
		size_t h = cr->health_ - w->damage();
		std::cout << "health of creature is now: " << h;
	}

}
size_t character::health(){	return health_;	}
size_t character::strength() { return strength_; }

void character::health(size_t health) { health_ = health; }
void character::strength(size_t strength) { strength_ = strength; }

std::ostream& operator<<(std::ostream& os, const character& ch) {
	return os << dynamic_cast<const gameObject&>(ch)
		<< "health: " << ch.health_
		<< " strength: " << ch.strength_;
}





