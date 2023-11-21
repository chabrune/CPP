#include "Span.hpp"
#define MAX_VALUE 1000000

void printElem(int elem)
{
    std::cout << elem << std::endl;
}

// int main()
// {
//     try
//     {
//         Span yolo(MAX_VALUE);
//         srand(time(NULL));
//         for(unsigned int i = 0; i < MAX_VALUE; i++)
//         {
//             yolo.addNumber(rand());
//         }
//         for_each(yolo.getItSpanBegin(), yolo.getItSpanEnd(), printElem);
//         std::cout << "Shortest span = " << yolo.shortestSpan() << std::endl;
//         std::cout << "Longest span = " << yolo.longestSpan() << std::endl;
//     }
//     catch(const std::exception &e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
// }

// int main()
// {
//     try
//     {
//         Span sp = Span(5);
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         for_each(sp.getItSpanBegin(), sp.getItSpanEnd(), printElem);
//         std::cout << "Shortest span = " << sp.shortestSpan() << std::endl;
//         std::cout << "Longest span = " << sp.longestSpan() << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     return 0;
// }

int main()
{
    try
    {
        Span tmp(10);
        srand(time(NULL));
        for(int i = 0; i < 10; i++)
            tmp.addNumber(rand());
        Span sp(12);
        sp.addNumber(42);
        sp.addNumber(tmp.getItSpanBegin(), tmp.getItSpanEnd());
        sp.addNumber(42);
        std::for_each(sp.getItSpanBegin(), sp.getItSpanEnd(), printElem);


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}