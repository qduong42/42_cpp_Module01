/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:40:21 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 21:30:20 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
	Weapon knife = Weapon("Katana");
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", knife);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon knife = Weapon("Katana");
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(&club);
	jim.attack();
	club.setType("heavy club");
	jim.attack();
	jim.setWeapon(&knife);
	jim.attack();
	}
	return (0);
}
