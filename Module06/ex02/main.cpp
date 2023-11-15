# include <cstdlib> 
# include <ctime>
# include <iostream>
# include <string>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void)
{
    std::srand(std::time(0));
    unsigned int random = std::rand() % 3;
    if(random == 0)
        return(new A);
    else if(random == 1)
        return(new B);
    else
        return(new C);
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "Type A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "Type B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "Type C" << std::endl;

}

int main()
{

}