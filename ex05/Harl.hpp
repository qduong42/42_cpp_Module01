/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:42:46 by qduong            #+#    #+#             */
/*   Updated: 2022/08/17 14:33:15 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	public:

		Harl();
		~Harl();

		void complain(std::string level);
	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		const size_t _count;
};

typedef void (Harl::*HarlMemFn)(void);

#endif
