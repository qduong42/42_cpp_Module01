/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 00:07:40 by qduong            #+#    #+#             */
/*   Updated: 2022/08/18 00:07:43 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
