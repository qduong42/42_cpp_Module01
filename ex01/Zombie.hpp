/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 23:39:35 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 00:06:15 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP
#include <iostream>


class Zombie{

	public:

		Zombie();
		~Zombie(void);

		void announce (void);
		void SetName(std::string name);

	private:

		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
