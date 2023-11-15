#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <climits>
# include <cfloat>
# include <cmath>
# include <cerrno>
# include <sstream>

class ScalarConverter
{
    public:
    static void convert(std::string s);

    private:
    ScalarConverter();
    ~ScalarConverter();
    ScalarConverter& operator=(ScalarConverter const &rhs);
    ScalarConverter(ScalarConverter const &copy);
    static void charConv(std::string s);
    static int isNumber(std::string s);
    static void floatConv(std::string s);
    static void intConv(std::string s);
    static void doubleConv(std::string s);
};

#endif