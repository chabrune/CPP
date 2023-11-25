#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <limits>

class BitcoinExchange
{
    public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange &rhs);
    BitcoinExchange(const BitcoinExchange &src);
    void parsingcsv( void );
    void handleoutput( const std::string argv );
    bool checkValue(const float n) const;
    bool checkDate(const std::string date) const;
    float findKey(std::string date);
    typedef std::map<std::string, float>::iterator iterator;
    typedef std::map<std::string, float>::reverse_iterator reverse_iterator;


    private:
    std::map<std::string, float> _database;
};