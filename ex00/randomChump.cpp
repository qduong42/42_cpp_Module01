#include "Zombie.hpp"

//declare class then nameofobject(params)
void randomChump( std::string name){
	Zombie random_zomb(name);
	random_zomb.announce();
	return ;
}
