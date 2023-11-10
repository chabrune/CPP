#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cerr << "1 params needed" << std::endl;
        return(1);
    }
    ScalarConverter::convert(argv[1]);
}