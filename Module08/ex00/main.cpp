#include "easyfind.hpp"

template<typename T>
void    printElem(T elem)
{
    std::cout << elem << std::endl;
}

int main()
{
    {
        std::cout << "Vector<int> : " << std::endl;
        std::vector<int> yolo;
        yolo.push_back(42);
        yolo.push_back(42);
        yolo.push_back(5);
        yolo.push_back(6);
        yolo.push_back(7);
        yolo.push_back(23);
        try
        {
            easyfind<std::vector<int>, int>(yolo, 5);
        }
        catch(const std::exception& e)
        {
            std::cerr << "s2 not found in s1 try again" << std::endl;
        }
        for_each(yolo.begin(), yolo.end(), printElem<int>);
    }
    std::cout << std::endl;

   {
        std::cout << "List<int> : " << std::endl;
        std::list<int> yolo;
        yolo.push_back(42);
        yolo.push_back(42);
        yolo.push_back(5);
        yolo.push_back(6);
        yolo.push_back(7);
        yolo.push_back(23);
        try
        {
            easyfind<std::list<int> >(yolo, 6);
        }
        catch(const std::exception& e)
        {
            std::cerr << "s2 not found in s1 try again" << std::endl;
        }
        for_each(yolo.begin(), yolo.end(), printElem<int>);
    }
    std::cout << std::endl;

    {
        std::cout << "Deque<int> : " << std::endl;
        std::deque<int> yolo;
        yolo.push_back(42);
        yolo.push_back(42);
        yolo.push_back(5);
        yolo.push_back(6);
        yolo.push_back(7);
        yolo.push_back(23);
        try
        {
            easyfind<std::deque<int> >(yolo, 7);
        }
        catch(const std::exception& e)
        {
            std::cerr << "s2 not found in s1 try again" << std::endl;
        }
        for_each(yolo.begin(), yolo.end(), printElem<int>);
    }
    std::cout << std::endl;

   {
        std::cout << "Vector<string> : " << std::endl;
        std::vector<std::string> yolo;
        yolo.push_back("yolobanzai1");
        yolo.push_back("yolobanzai2");
        yolo.push_back("yolobanzai3");
        yolo.push_back("yolobanzai4");
        yolo.push_back("yolobanzai5");
        yolo.push_back("yolobanzai6");
        try
        {
            easyfind<std::vector<std::string>, std::string>(yolo, "yolobanzai");
        }
        catch(const std::exception& e)
        {
            std::cerr << "s2 not found in s1 try again" << std::endl;
        }
        for_each(yolo.begin(), yolo.end(), printElem<std::string>);
    }
}