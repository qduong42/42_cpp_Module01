#include "HumanB.hpp"

//	CONSTRUCTORS | DESTRUCTOR
//Dont use this in constructors for initialisation list
HumanB::HumanB(std::string name): _weapon(NULL), _name(name){
	return ;
}

HumanB::~HumanB(){
	return ;
}

//	MEMBER FUNCTIONS

void HumanB::attack(void)const {
	if (this->_weapon)
	{
	std::cout << this->_name << " attacks with their " 
			  << this->_weapon->getType()<< std::endl;
	}
	else
	std::cout <<this->_name << " attacks with their "
			  << "BARE HANDS" << std::endl;
}
void HumanB::setWeapon(Weapon *weapon){
	this->_weapon = weapon;
}