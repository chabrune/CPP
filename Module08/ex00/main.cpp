#include "easyfind.hpp"

template<typename T>
void    printElem(T elem)
{
    std::cout << elem << std::endl;
}

int main()
{
    std::vector<int> yolo;
    // std::list<int> yolo;
    // std::deque<int> yolo;
    // std::vector<std::string> yolo;
    yolo.push_back(42);
    yolo.push_back(42);
    yolo.push_back(5);
    yolo.push_back(6);
    yolo.push_back(7);
    yolo.push_back(23);
    // yolo.push_back("yolobanzai1");
    // yolo.push_back("yolobanzai2");
    // yolo.push_back("yolobanzai3");
    // yolo.push_back("yolobanzai4");
    // yolo.push_back("yolobanzai5");
    // yolo.push_back("yolobanzai6");

    try
    {
        easyfind<std::vector<int>, int>(yolo, 5);
        // easyfind<std::list<int> >(yolo, 5);
        // easyfind<std::deque<int> >(yolo, 5);
        // easyfind<std::vector<std::string>, std::string>(yolo, "yolobanzai3");
    }
    catch(const std::exception& e)
    {
        std::cerr << "s2 not found in s1 try again" << std::endl
    }
    for_each(yolo.begin(), yolo.end(), printElem<int>);
    // for_each(yolo.begin(), yolo.end(), printElem<std::string>);
}