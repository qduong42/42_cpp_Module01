#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string name);
		~HumanB();

		void attack(void)const;
		void setWeapon(Weapon *weapon);

	private:

		Weapon *_weapon;
		std::string _name;
};

#endif
