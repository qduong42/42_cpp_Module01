#include "Weapon.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Weapon::Weapon(std::string type):_type(type){
	return ;
}

Weapon::~Weapon(){
	return ;
}

//	MEMBER FUNCTIONS

std::string const& Weapon::getType(void)const{
	// std::string &ref = this->_type;
	//return (ref); -> obsolete?
	return (this->_type);
}

void Weapon::setType(std::string newType){
	this->_type = newType;
	// std::cout << this->_type;
	return ;
}