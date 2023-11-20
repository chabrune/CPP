#include <vector>
#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include <list>
#include <deque>

template<typename T>
void easyfind(T &cont, int find)
{
    typename T::iterator it = cont.begin();
    typename T::iterator ite = cont.end();
    for(; it != ite; ++it)
    {
        // std::cout << "lol" << std::endl;
        // if(std::find(cont.begin(), cont.end(), find) == cont.end())
        if(*it == find)
        {
            std::cout << "Elements found at " << std::distance(cont.begin(), it) <<  " position" << std::endl;
            return;
        }
    }
    throw(std::exception());
}