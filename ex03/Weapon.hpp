#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string const& getType()const; // returns const ref to string
		void setType(std::string newType);

	private:

		std::string _type;
};

#endif
