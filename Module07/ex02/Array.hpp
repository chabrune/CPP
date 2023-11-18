#pragma once

#include <iostream>

template<typename T>
class Array
{
    public:
    Array()
    {
        this->_array = new T[0];
        this->_size = 0;
    }
    Array(unsigned int n)
    {
        this->_array = new T[n];
        this->_size = n;
    }
    Array(const Array<T> & src)
    {
        this->_array = new T[src.size()];
        this->_size = src.size();
        for(unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = src._array[i];
    }
    Array<T> & operator=(const Array<T> & rhs)
    {
        if(this != &rhs)
        {
            delete [] this->_array;
            this->size = rhs.size();
            for(unsigned int i = 0; i < rhs.size(); i++)
                this->_array[i] = rhs._array[i];
        }
        return(*this);
    }
    T& operator[](unsigned int n)
    {
        if(n >= this->_size)
            throw(std::exception());
        return(this->_array[n]);
    }
    unsigned int size() const
    {
        return(this->_size);
    }
    ~Array()
    {
        delete [] this->_array;
    }
    private:
    T *_array;
    unsigned int _size;
};




















































































// #pragma once

// #include <iostream>
// #include <cstdlib>

// template<typename T>
// class Array
// {
//     public:
//     Array<T>()
//     {
//         this->_array = new T[0];
//         this->_size = 0;
//     }
//     Array<T>(unsigned int n)
//     {
//         this->_array = new T[n];
//         this->_size = n;
//     }
//     Array<T>(const Array<T> & copy)
//     {
//         this->_array = new T[copy._size];
//         this->_size = copy._size;
//         for(unsigned int i = 0; i < copy.size; i++)
//             this->_array[i] = copy._array[i];
//     }
//     ~Array<T>()
//     {
//         delete [] this->_array;
//     }
//     Array<T> & operator=(const Array<T> & rhs)
//     {
//         if(this != &rhs)
//         {
//             delete [] this->_array;
//             this->_size = rhs._size;
//             this->_array = new T[rhs.size];
//             for(unsigned int i = 0; i < this->_size; i++)
//                 this->_array[i] = rhs._array[i];
//         }
//     }
//     T& operator[](unsigned int n) const
//     {
//         if(n >= this->_size)
//             throw(std::exception())
//     }
//     unsigned int size() const
//     {
//         return(this->_size);
//     }
//     private:
//     T *_array;
//     unsigned int _size;

// };