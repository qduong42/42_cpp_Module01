#include "Zombie.hpp"

Zombie::Zombie(std::string name):_name(name){
	std::cout << this->_name << " is here, prepare to DIE" << std::endl;
	return ;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " has been killed" << std::endl;
	return ;
}

void	Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
