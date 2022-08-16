#include <iostream>
#include <fstream>
#include <string>

/**
 * Create program 3 params: filename, strings s1 & s2
 * Opens filename, copies contents new file <filename>.replace
 * replace occurence s1 with s2
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
	std::string to_replace = argv[2];
	std::string replace_with = argv[3];
	std::ifstream infile;
	infile.open(filename);
	if (infile.fail())
		std::cout << "Cant open File" << std::endl;
	infile.close();


	//----------------
	std::string out = filename + ".replace";
	std::ofstream outfile(out);

	// ofs << ifs;
	outfile.close();
	}
	else
		std::cout << "Invalid number of arguments. Use by ./rep <filename> <string s1> <string s2>" << std::endl;
}