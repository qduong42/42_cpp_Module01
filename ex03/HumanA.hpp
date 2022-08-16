/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 01:14:15 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 21:43:36 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
#define HUMANA_CLASS_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

/**
 * Human A takes weapon in constructor, will always be armed 
 * 
 */
class HumanA
{

	public:

		HumanA(std::string name, Weapon &weaponType);
		~HumanA();

		void attack(void)const;

	private:

		Weapon &_weapon;
		std:: string _name;
		
};

#endif 