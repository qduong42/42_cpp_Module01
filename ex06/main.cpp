/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:43:03 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 19:09:50 by qduong           ###   ########.fr       */
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
	std::cout << "Harl complained once!" << std::endl;
	return (0);
}
