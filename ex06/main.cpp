/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:43:03 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 14:47:55 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Execute program with ./ \"command\"" << std::endl;
		std::cout << "Valid commands are \"DEBUG\"  \"INFO\"  \"WARNING\" and \"ERROR\""<< std::endl;
		return (0);
	}
	Harl harl;
	harl.complain(argv[1]);
	std::cout << "DEBUG complaint DONE" << std::endl;
	return (0);
}
