//ZORK PROJECT: MINA TREVIZO           ==CSPC 121 SECTION: 15/16==


#include <iomanip>
#include <iostream>
#include "gameObject.h"
#include "item.h"
#include "weapons.h"
#include "app.h"
#include"character.h"
#include "player.h"
#include "creature.h"




int main()
{

	std::cout << "\t\t WELCOME TO ZORK" << std::endl << std::endl;
	app hawaii_50("the game is OVER");
	weapons* sword = new weapons("ENERGY SWORD", "a long energy sword used for stabby stabby");
	std::cout << std::endl << "the sword is:	" << *sword;

	character* chars = new player("PLAYER", 30, 50);
	std::cout << std::endl << "character creation: " << *chars << std::endl;
	character* creatures = new creature("perish", 100, 9);
	std::cout << std::endl << "creature creation: " << *creatures << std::endl;
	chars->attackwith(sword,creatures);

	


	return 0;
}