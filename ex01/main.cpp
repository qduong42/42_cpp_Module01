/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:00:46 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 17:02:28 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//delete syntax for array delete [] instead of loop through array and delete each one

int main(void)
{
	Zombie *zom;
	zom = zombieHorde(10, "Michael");
	delete[] zom;
	return (0);
}
