/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:00:33 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 00:00:34 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//declare class then nameofobject(params)
void randomChump( std::string name){
	Zombie random_zomb(name);
	random_zomb.announce();
	return ;
}
