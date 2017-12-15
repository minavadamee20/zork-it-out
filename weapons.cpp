#include "weapons.h"
#include "character.h"
#include "creature.h"
weapons::weapons(const std::string& name, const std::string& desc,
	size_t damage, size_t defense) : item(name, desc),
	damage_(damage), defense_(defense) {}

bool weapons::useon(gameObject *go) const {
	
	character* c = dynamic_cast<character*>(go);
	if (c != nullptr) { c->attackwith(this,c); return true; }
	else { return false; }
	return true;
}

size_t weapons::damage() const { return damage_; }
size_t weapons::defense() const { return defense_; }



std::ostream& operator<<(std::ostream& os, const weapons& w) {
	return os
		<< dynamic_cast<const item&>(w)
		<< ",damage:"
		<< w.damage_
		<< " , defense:" <<
		w.defense_
		<< std::endl;
}
