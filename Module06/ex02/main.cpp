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
        std::cout << "Cast A* ok" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "Cast B* ok" << std::endl;
    else
        std::cout << "Cast C* ok" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Cast A& ok"  << std::endl;
        (void)a;
    }
    catch(const std::exception &e)
    {}
    try
    {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Cast B& ok" << std::endl;
        (void)b;

    }
    catch(const std::exception &e)
    {}
    try
    {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Cast C& ok" << std::endl;
        (void)c;
    }
    catch(const std::exception &e)
    {}
}

int main()
{
    Base *lol = generate();
    identify(lol);
    Base &yolo = *lol;
    identify(yolo);
}