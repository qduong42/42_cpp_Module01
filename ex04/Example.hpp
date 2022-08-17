
#ifndef Example_H
# define Example_H
# include <iostream>

class Example
{

public:

	Example(void);
	Example(int value);
	~Example(void);

	void				setValue(int value);
	int const 			&getValue(void) const;
	void				setName(std::string name);
	std::string	const & getName(void) const;
	
private:

	int			_value;
	std::string	_name;
};

#endif