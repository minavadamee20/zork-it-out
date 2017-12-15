#include "gameObject.h"

#include <iostream>
#include "item.h"



gameObject::gameObject() :gameObject{ "no name", "no_desc" } {}

gameObject::gameObject(const std::string& name, const std::string& desc)
	: name_(name), desc_(desc) {}
gameObject::gameObject(const std::string& name) : name_(name) {}


gameObject::~gameObject() {}

const std::string& gameObject::name() const { return name_; }
const std::string& gameObject::desc() const { return desc_; }

std::ostream& operator<<(std::ostream& os, const gameObject& go) {
	return os << go.name_ << " \n\t\t: [ " << go.desc_ << " ]" << std::endl;
}

bool use(const item* an_item, gameObject* go)
{
	return an_item->useon(go);
}


