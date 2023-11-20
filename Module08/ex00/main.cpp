#include "easyfind.hpp"

template<typename T>
void    printElem(T elem)
{
    std::cout << elem << std::endl;
}

int main()
{
    // std::vector<int> yolo;
    // std::list<int> yolo;
    std::deque<int> yolo;
    yolo.push_back(42);
    yolo.push_back(42);
    yolo.push_back(5);
    yolo.push_back(6);
    yolo.push_back(7);
    yolo.push_back(23);
    try
    {
        // easyfind<std::vector<int> >(yolo, 5);
        // easyfind<std::list<int> >(yolo, 5);
        easyfind<std::deque<int> >(yolo, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    for_each(yolo.begin(), yolo.end(), printElem<int>);
}