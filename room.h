#pragma once
#ifndef room_h
#define room_h
#include <string>
#include "character.h"
class room {
public:
	room(const std::string& name, const character& ch);

	bool locked(const character* c);


private:

};
#endif // !room_h
