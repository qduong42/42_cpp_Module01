#include <string>
#include <iostream>
#include <fstream>
#include <sstream> 

int main()
{
	std::ifstream t("test.txt");
	std::stringstream buffer;
	buffer << t.rdbuf();
	std::cout << buffer.str() <<std::endl;
	return (0);
}