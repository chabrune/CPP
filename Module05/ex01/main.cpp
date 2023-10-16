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
            std::cerr << e.what() << std::endl << std::endl;
        }
    }
    Bureaucrat	catherine("cathy", 150);
    catherine.incrementGrade(50);
    std::cout << catherine.getGrade() << std::endl;
    catherine.incrementGrade(42);
    std::cout << catherine.getGrade() << std::endl;
    std::cout << catherine << std::endl << std::endl;


    Bureaucrat	martine("titine", 1);
    std::cout << martine << std::endl;
    martine.decrementGrade(41);
    std::cout << martine << std::endl;
    std::cout << martine.getName() << std::endl;



}