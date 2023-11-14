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
	if(ScalarConverter::isNumber(s) == 0 && s != "-inff" && s != "-inf" && s != "+inf" && s != "+inff" && s != "nan" && s != "nanf")
	{
		std::cerr << "Try again" << std::endl;
		return;
	}
    if(s.length() == 1 && !std::isdigit(s[0]))
		ScalarConverter::charConv(s);
	else if(ScalarConverter::isNumber(s) == 1 || s == "-inff" || s == "+inff" || s == "nanf")
		ScalarConverter::floatConv(s);
	else if(ScalarConverter::isNumber(s) == 2 || s == "-inf" || s == "+inf" || s == "nan")
		ScalarConverter::doubleConv(s);
	else if(ScalarConverter::isNumber(s) == 3)
		ScalarConverter::intConv(s);
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
	unsigned long i = 0;
	unsigned long j = 0;
	bool has_point = false;
	bool is_float = false;
	if(s[0] == '+' || s[0] == '-')
		i++;
	if(i == 1)
		j = 1;
	while(s[i])
	{
		if(!std::isdigit(s[i]))
		{
			if(s[i] == '.' && has_point == false)
				has_point = true;
			if(has_point == true && !s[i + 1] && std::tolower(s[i]) == 'f')
				is_float = true;
		}
		if(std::isdigit(s[i]))
			j++;
		i++;
	}
	if(is_float == true && has_point == true)
		return(1);
	else if(has_point == true && !is_float)
		return(2);
	else if(j == i)
		return(3);
	else
		return(0);
}

bool estEntier(float f)
{
	return(f == std::floor(f));
}

float convertStringToFloat(const std::string& s) 
{
	const char *str = s.c_str();
    double f = std::atof(str);
	if(s == "+inff" || s == "-inff" || s == "nanf")
		return(static_cast<float>(f));
    if (f >= FLT_MAX || f <= -FLT_MAX)
        throw std::out_of_range("Number out of range");
    return(static_cast<float>(f));
}

void ScalarConverter::floatConv(std::string s)
{
	try
	{
		float f = convertStringToFloat(s);
		if(f < 0 || f > 127 || s == "nanf")
			std::cout << "char: impossible" << std::endl;
		else if(f < 32 || f == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		int intMin = std::numeric_limits<int>::min();
		int intMax = std::numeric_limits<int>::max();
		if(f > intMax || f < intMin || s == "nanf")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		if (std::isinf(f)) 
		{
			if (std::signbit(f))
				std::cout << "float: " << f << "f" <<  std::endl;
			else
				std::cout << "float: +" << f << "f" << std::endl;
		}
		else if(estEntier(f))
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: ";
		if(s[0] == '+' && s.find("inf") != std::string::npos)
			std::cout << "+" << f << std::endl;
		else if(estEntier(f) && s != "-inff" && s != "+inff")
			std::cout << f << ".0" << std::endl;
		else
			std::cout << f << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

int convertStringToInt(const std::string& str)
{
    char* endPtr;
    long result = std::strtol(str.c_str(), &endPtr, 10);

    if (endPtr == str.c_str() || *endPtr != '\0' || result > INT_MAX || result < INT_MIN) {
        throw std::out_of_range("Number out of range");
    }

    return static_cast<int>(result);
}

void ScalarConverter::intConv(std::string s)
{
	try
	{
		int n = convertStringToInt(s);
		if(n < 0 || n > 127)
			std::cout << "char: impossible" << std::endl;
		else if(n < 32 || n == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
		if(n > INT_MAX || n < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << n << std::endl;
		std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
	}
	catch(const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

float convertStringToDouble(const std::string& s) 
{
	const char *str = s.c_str();
    double f = std::atof(str);
    if (f >= DBL_MAX || f <= -DBL_MAX)
        throw std::out_of_range("Number out of range");
    return(f);
}

bool estEntierDouble(double d)
{
	return(d == std::floor(d));
}


void ScalarConverter::doubleConv(std::string s)
{
	try
	{
		double d = convertStringToDouble(s);
		if(d < 0 || d > 127 || s == "nan")
			std::cout << "char: impossible" << std::endl;
		else if(d < 32 || d == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		if(d > INT_MAX || d < INT_MIN || s == "nan")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		if (std::isinf(d)) 
		{
			if (std::signbit(d))
				std::cout << "float: " << d << "f" <<  std::endl;
			else
				std::cout << "float: +" << d << "f" << std::endl;
		}
		else if(estEntierDouble(d))
			std::cout << "float: " << d << ".0f" << std::endl;
		else
			std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: ";
		if(s[0] == '+' && s.find("inf") != std::string::npos)
			std::cout << "+" << d << std::endl;
		else if(estEntier(d) && s != "-inff" && s != "+inff")
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
		
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
