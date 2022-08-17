#include "Example.hpp"

Example::Example(void)
{
	this->_value = 0;
}

Example::Example(int value)
{
	this->_value = value;
}

Example::~Example(void)
{

}

void	Example::setValue(int value)
{
	this->_value = value;
}

int const &Example::getValue(void) const
{
	return (this->_value);
}





void	Example::setName(std::string name)
{
	this->_name = name;
}

std::string const & Example::getName(void) const
{
	return (this->_name);
}
