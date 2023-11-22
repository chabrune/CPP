#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    (void)rhs;
    return(*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    (void)src;
}

void BitcoinExchange::parsing()
{
    std::ifstream file("data.csv");
    std::string line;
    while(std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string key, rateStr;
        if (std::getline(std::getline(iss, key, ','), rateStr, ','))
        {
            this->_data[key] = std::atoi(line.c_str());

            // this->_data[key] = std::atoi(line.c_str());

        }
        std::cout << this->_data[key] << std::endl;
    }
}