/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:42:53 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 19:09:15 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//	CONSTRUCTORS | DESTRUCTOR

Harl::Harl():_count(4)
{
	std::cout << "Harl has arrived!" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "Harl has run out of battery!" << std::endl;
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
			(this->*a[i++])();
			 __attribute__((fallthrough));
		case 1:
			(this->*a[i++])();
			 __attribute__((fallthrough));
		case 2:
			(this->*a[i++])();
			 __attribute__((fallthrough));
		case 3:
			(this->*a[i])();
			break ;
		default:
		std::cout << "[Enter a valid complaint level noob!]" << std::endl;
		break;
	}
}
//Switch attribute: fallthrough?

void Harl::debug(void)
{
	std::cout <<"=============DEBUG====================" << std::endl
			  << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-"
			  << "special-ketchup burger. I really do!" << std::endl;
	return ;
}

void Harl::info(void)
{
	std::cout <<"=============INFO====================" << std::endl
			  << "I cannot believe adding extra bacon costs more money. You didn’t put"
			  << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;	
}

void Harl::warning(void)
{
	std::cout <<"=============WARNING====================" << std::endl
			  << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	<< " years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout <<"=============ERROR====================" << std::endl
			  << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}


//	MEMBER FUNCTIONS

