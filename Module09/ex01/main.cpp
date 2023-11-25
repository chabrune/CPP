#include "RPN.hpp"

int main(int argc, char **argv)
{
    if(argc != 2 || !argv)
    {
        std::cout << "This program take an inverted Polish mathematical expression as an argument" << std::endl;
        return(1);
    }
    RPN s;
    try
    {
        s.handleError(std::string(argv[1]));
        s.handleInput(std::string(argv[1]));
    }
    catch(const std::logic_error &e)
    {
        std::cout << e.what() << std::endl;
    }
}