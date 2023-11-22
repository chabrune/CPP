#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

class BitcoinExchange
{
    public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange &rhs);
    BitcoinExchange(const BitcoinExchange &src);
    void parsing( void );

    private:
    std::map<std::string, int> _data;
};