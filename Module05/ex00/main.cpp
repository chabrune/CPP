#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat koukou("Papi", 5);
        /* do some stuff with bureaucrats */
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        /* handle exception */
    }
}