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
	if(ScalarConverter::isNumber(s) == 1 || s == "-inff" || s == "+inff" || s == "nanf")
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
	else if(has_point == true)
		return(2);
	else
		return(3);
}

bool estEntier(float f)
{
	return(f == std::floor(f));
}

std::string isInfOrNan(std::string s, int type)
{
	if(s == "nan" && type == 1)
		return("nan");
	else
		return("nanf");
	if(s == "nanf" && type == 1)
		return("nanf");
	else
		return("nan");
	if(s == "+inf" && type == 1)
		return("+inf");
	else
		return("+inff");
	if(s == "+inff" && type == 1)
		return("+inff");
	else
		return("+inf");
	if(s == "-inf" && type == 1)
		return("-inf");
	else
		return("-inff");
	if(s == "-inff" && type == 1)
		return("-inff");
	else
		return("-inf");
}

void ScalarConverter::floatConv(std::string s)
{
	const char *str = s.c_str();
	float f = static_cast<float>(std::strtof(str, NULL));
	//CHAR
	if(f < 0 || f > 127 || s == "nanf")
		std::cout << "char: impossible" << std::endl;
	else if(f < 32 || f == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	//INT
	int intMin = std::numeric_limits<int>::min();
	int intMax = std::numeric_limits<int>::max();
	if(f > intMax || f < intMin || s == "nanf")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	//FLOAT
	std::cout << "LOOL " << f << std::endl;
	if (std::isinf(f)) 
	{
		if (std::signbit(f))
			std::cout << "float: " << f << std::endl;
		else
			std::cout << "float: " << f << std::endl;
    }
	else if (f > FLT_MAX || f < -FLT_MAX)
        std::cout << "float: " << f << std::endl;
	else if(estEntier(f))
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	//DOUBLE
	std::cout << "double: ";
	if(s[0] == '+')
		std::cout << "+" << static_cast<double>(f) << std::endl;
	else
		std::cout << static_cast<double>(f) << std::endl;
	
}