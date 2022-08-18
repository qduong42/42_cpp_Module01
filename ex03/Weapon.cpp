/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 00:07:32 by qduong            #+#    #+#             */
/*   Updated: 2022/08/18 00:07:34 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Weapon::Weapon(std::string type):_type(type){
	return ;
}

Weapon::~Weapon(){
	return ;
}

//	MEMBER FUNCTIONS

std::string const& Weapon::getType(void)const{
	// std::string &ref = this->_type;
	//return (ref); -> obsolete?
	return (this->_type);
}

void Weapon::setType(std::string newType){
	this->_type = newType;
	// std::cout << this->_type;
	return ;
}