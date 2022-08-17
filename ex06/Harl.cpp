/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:42:53 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 14:56:40 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Harl::Harl():_count(4)
{
	return ;
}

Harl::~Harl()
{
	return ;
}

//First Idea: 		void (Harl::*HarlMemFn)(void) = &Harl::level;
// 					this->.*HarlMemFn();
// doesnt work because level doesnt expand to string.
// 2 Arrays: Function array + string array with same index.
void Harl::complain(std::string level)
{
	std::string const commands[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemFn a[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	//if using typedef void(Harl::*f)(void) -> f[4];
	size_t i = 0;
	while (i < _count)
	{
		if (level == commands[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			for (size_t y = i; y < this->_count; y++)
				(this->*a[y])();
			break ;
		case 1:
			for (size_t y = i; y < this->_count; y++)
				(this->*a[y])();
			break ;
		case 2:
			for (size_t y = i; y < this->_count; y++)
				(this->*a[y])();
			break ;			
		case 3:
			for (size_t y = i; y < this->_count; y++)
				(this->*a[y])();
			break ;
		case 4:
			for (size_t y = i; y < this->_count; y++)
				(this->*a[y])();
			break ;
		default:
		std::cout << "[Enter a valid complaint level noob!]" << std::endl;
		break;
	}
}
//Switch attribute: fallthrough?

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-"
			  << "special-ketchup burger. I really do!" << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
			  << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;	
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	<< " years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}


//	MEMBER FUNCTIONS

