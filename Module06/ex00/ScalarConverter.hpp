#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

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
    int isNumber(std::string s);
    
};

#endif