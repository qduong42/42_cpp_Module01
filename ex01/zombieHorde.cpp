/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:00:55 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 00:17:58 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//Custom constructor with params can set all in array? new Zombie(name)[N]?
//If declaring array of class, you need to loop through and set each individually
Zombie* zombieHorde( int N, std::string name ){
	Zombie *zom;
	zom = new Zombie[N]; 
	for (int i = 0; i < N; i++)
	{
		zom[i].SetName(name);
		zom[i].announce();
	}
	return (zom);
}
