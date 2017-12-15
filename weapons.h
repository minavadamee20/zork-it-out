
#pragma once
#ifndef weapons_h
#define weapons_h
#include "item.h"	
#include "character.h"
//#include "creature.h"
class creature;


class weapons : public item {
public:
	weapons(const std::string& name, const std::string& desc, size_t damage = 10, size_t defense = 40);

	bool useon(gameObject* go)const;

	size_t damage() const;
	size_t defense() const;

	friend std::ostream& operator<<(std::ostream& os, const weapons& w);

private:
	size_t damage_;
	size_t defense_;




};
#endif // !weapons_h
//DEFAULT VALUES GO IN THE CONSTRUCTOR WHICH ARE IN THE HEADER FILE. FRIENDS ARE IN HEADER FILE, VIRTUAL GOES IN THE HEADER FILE. 