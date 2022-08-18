/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduong <qduong@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:42:34 by qduong            #+#    #+#             */
/*   Updated: 2022/08/18 00:22:06 by qduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

/**
 * Create program 3 params: filename, strings search & replace
 * Opens filename, copies contents new file <filename>.replace
 * replace occurence search with replace
 * std::string.replace forbidden, otherwise all member functions allowed.
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv)
{
	(void) argv;
	if (argc == 4)
	{
		std::string filename = argv[1];
		filename.append(".replace");
		const std::string search = argv[2];
		const std::string replace = argv[3];
		std::ifstream infile(argv[1], std::ios_base::ate);
		std::ofstream outfile(filename.c_str());
		// changed structure to compile for linux. linux compilation requires .c_str()
		// outfile.open(filename.c_str()); 
		// infile.open(argv[1], std::ios_base::ate);
		if (infile.fail())
			std::cout << "Cant open File or no access" << std::endl;
		int length = infile.tellg();
		infile.seekg(0, std::ios_base::beg);
		char *temp = new char[length + 1];
		infile.read(temp, length);
		infile.close();
		temp[length] = '\0';
		std::string content = temp;
		delete[] temp;
		size_t	pos;
		if (search.length() > 0)
		{
		do
		{
			//check if s1 is empty-> infinite loop
			pos = content.find(search);
			if (pos != std::string::npos)
			{
				content.erase(pos, search.length());
				content.insert(pos, replace);
			}
		} while (pos != std::string::npos);
		}
		outfile << content;
		outfile.close();
	}
	else
		std::cout << "Invalid number of arguments. Use by ./rep <filename> <string search> <string replace>" << std::endl;
}
