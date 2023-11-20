#pragma once

#include <vector>
#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include <list>
#include <deque>

template<typename T, typename F>
void easyfind(T &cont, F find)
{
    typename T::iterator it = cont.begin();
    typename T::iterator ite = cont.end();
    for(; it != ite; ++it)
    {
        if(*it == find)
        {
            std::cout << "Elements found at " << std::distance(cont.begin(), it) <<  " position" << std::endl;
            return;
        }
    }
    throw(std::exception());
}