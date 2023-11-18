#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    {
        try
        {
            Form    f1("CERFA02", 0, 20);
        }
        catch(std::exception & e)
        {
            std::cerr << e.what() << std::endl << std::endl;
        }
    }
    Bureaucrat Martine("titine", 109);
    Form    f1("CERFA02", 100, 20);
    try
    {
        Martine.incrementGrade(5);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }
	Martine.signAForm(f1);
    return(0);
}