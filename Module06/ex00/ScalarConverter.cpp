#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &rhs)
{
    (void)rhs;
    return(*this);
}

ScalarConverter::ScalarConverter(ScalarConverter const & copy)
{
    *this = copy;
}

void ScalarConverter::convert(std::string s)
{
    if(s.length() == 1 && !std::isdigit(s[0]))
		ScalarConverter::charConv(s);
	if(ScalarConverter::isNumber(s) == 1 || s == "-inff" || s == "+inff" || s == "nan")
		ScalarConverter::floatConv(s);
}

void ScalarConverter::charConv(std::string s)
{
	char c = s[0];
	if(c < 32 || c == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << s[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(s[0]) << ".0" << std::endl;
}

int ScalarConverter::isNumber(std::string s)
{
	int i = 0;
	bool has_point = false;
	bool is_float = false;
	if(s[0] == '+' || s[0] == '-')
		i++;
	while(s[i])
	{
		if(!std::isdigit(s[i]))
		{
			if(s[i] == '.' && has_point == false)
				has_point = true;
			if(has_point == true && !s[i + 1] && std::tolower(s[i]) == 'f')
				is_float = true;
		}
		i++;
	}
	if(is_float == true)
		return(1);
	else if(has_point == false)
		return(2);
	else
		return(3);
}