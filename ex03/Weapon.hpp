#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:

		Weapon();
		~Weapon();
		const std::string& getType(); // returns const ref to string
		void setType(std::string type);

	private:

		std::string _type;
};

#endif
