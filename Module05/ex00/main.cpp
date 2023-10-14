#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    {
        try
        {
            Bureaucrat	martine("titine", 0);
        }
        catch(std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    // catherine = martine;
	// std::cout << catherine << std::endl;
	// std::cout << martine << std::endl;

    // try
    // {
    //     Bureaucrat philipe("fifi", 200);
    //     /* do some stuff with bureaucrats */
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    //     /* handle exception */
    // }

    // Bureaucrat catherine("cathy", 0);

}