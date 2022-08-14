/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:00:42 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 00:00:43 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
