
#include "item.h"
item::item(const std::string& name, const std::string& desc) :gameObject(name, desc) {}



bool item::operator<(const item& other) const { return name() < other.name(); }
bool item::operator==(const item& other) const { return name() == other.name(); }

std::ostream& operator <<(std::ostream& os, const item& an_item) {
	return os << dynamic_cast<const gameObject&>(an_item);
}
/*we are up casting the item to the gameobject.we are casting (an_item) to the gameObject */


//==================================IMPORTANT===============================
/*				downcast pointers
up-cast references*/
//==========================================================================
