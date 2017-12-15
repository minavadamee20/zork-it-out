
#pragma once
#ifndef gameObject_h
#define gameObject_h
#include <string>
#include <iostream>


class item;

class gameObject {
public:
	gameObject();
	gameObject(const std::string& name, const std::string& desc);
	gameObject(const std::string& name);

	virtual ~gameObject() = 0;

	const std::string& name()  const;
	const std::string& desc() const;

	friend std::ostream& operator<<(std::ostream& os, const gameObject& go);
private:
	std::string name_;
	std::string desc_;


};

bool use(const item* an_item, gameObject* go);



#endif // gameObject_h


/*this class should only allow to show the name of the object. we should create
another class called player. we may have to create an observer pattern to
update player and items....*/
