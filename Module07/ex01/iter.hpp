#pragma once

# include <cstdlib>
# include <iostream>

template<typename T>
void iter(T *array, int lenght, void (*f)(T const &))
{
    for(int i = 0; i < lenght; i++)
        f(array[i]);
}