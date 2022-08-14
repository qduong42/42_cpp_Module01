/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 00:00:08 by qduong            #+#    #+#             */
/*   Updated: 2022/08/15 00:00:14 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
**clang++ -c -Wall -Wextra -Werror -std=c++98 -g main.cpp -o main.o
main.cpp:6:9: error: use of undeclared identifier 'newZombie'; did you mean 'Zombie'?
        temp = newZombie("Bob");
               ^
./Zombie.hpp:19:7: note: 'Zombie' declared here
class Zombie{
      ^
1 error generated.
make: *** [main.o] Error 1
-	Error magically dissapeared. why is the computer trolling me? Fixed it by including random libraries than cant reproduce...
*/

int main(void)
{
	Zombie *temp;
	temp = newZombie("Bob");
	temp->announce();
	delete temp;
	randomChump("Idiot");
	return (0);
}
