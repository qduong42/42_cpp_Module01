// read file data using associated buffer's members
#include <iostream>		 // std::cout
#include <fstream>			// std::filebuf, std::ifstream

int main () {
	std::ifstream ifs ("test.txt", std::ios::ate);
	std::cout << ifs.tellg() << std::endl;
	ifs.seekg(25);
	std::cout << ifs.tellg() << std::endl;
	return 0;
}

//outpits 81 test.txt contains 81 characters.