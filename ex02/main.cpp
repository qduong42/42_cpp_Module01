/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:20:44 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 00:27:55 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string var = "Hi THIS IS BRAIN";
	std::string *stringPTR;
	stringPTR = &var;
	std::string &ref = var;
	std::cout << "Memory of var:" << &var << std::endl;
	std::cout << "Memory of stringPTR:" << &stringPTR << std::endl;
	std::cout << "Memory of stringREF:" << &ref << std::endl;
	std::cout << "value of string:" << var << std::endl;
	std::cout << "value of stringPTR:" << *stringPTR << std::endl;
	std::cout << "value of stringREF:" << ref << std::endl;
	return (0);
}