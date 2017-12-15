
#pragma once
#ifndef item_h
#define item_h
#include "gameObject.h"
#include <sstream>

class item :public gameObject {
public:
	item(const std::string& name, const std::string& desc);
	/*we don't need to have "no_name" because the constructor in the gameObject class
	has a default constructor already*/



	virtual bool useon(gameObject* go)const = 0;
	/*it says that you can use items on a gameobject, and a gameobject is a item*/



	bool operator<(const item& other) const;
	bool operator==(const item& other) const;
	/*here we are overloading the operator to make the order within the list*/



	friend std::ostream& operator<<(std::ostream& os, const item& an_item);
private:
	/*const std::string name_;*/
};
#endif // !item_h


/*all items that go in a set must define those operators, because the set is ordered.
so when the new person in the set, we use those operators that we overloaded to define
the order*/