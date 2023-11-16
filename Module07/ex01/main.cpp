#include "iter.hpp"

template<typename T>
void printElements(T const & array)
{
    std::cout << array << std::endl; 
}
int main()
{
    srand(time(NULL));
    int array[10];
    for(int i = 0; i < 10; i++)
    {
        array[i] = rand() % 10;
    }
    iter<int>(array, 10, &printElements);
}