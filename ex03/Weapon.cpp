#include "Weapon.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Weapon::Weapon():_type("")
{return ;}

Weapon::Weapon(const Weapon &obj)
{}

Weapon& Weapon::operator=(const Weapon &obj)
{}

Weapon::~Weapon()
{return ;}

//	MEMBER FUNCTIONS

const std::string& Weapon::getType(){
	std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType(std::string type){
	this->_type = type;
}