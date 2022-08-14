/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:39:35 by qduong            #+#    #+#             */
/*   Updated: 2022/08/14 23:04:35 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
#include <iostream>

void randomChump( std::string name);

class Zombie{

	public:

		Zombie(std::string name);
		~Zombie(void);

		void announce (void);

	private:

		std::string _name;
};

Zombie*	newZombie( std::string name);

#endif
