#pragma once

#ifndef character_h
#define character_h

#include "gameObject.h"


class weapons;
class creature;


class character : public gameObject {

public:
	character(const std::string& name, size_t health, size_t strength);
	virtual ~character() {}

	void attackwith(const weapons* w, character* cr);

	size_t health();
	size_t strength();

	void health(size_t health);
	void strength(size_t strength);
	friend std::ostream& operator<<(std::ostream& os, const character& ch);

protected:
	size_t health_;
	size_t strength_;

};

#endif // character_h
