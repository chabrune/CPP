#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
    this->_database = rhs._database;
    return(*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    this->_database = src._database;
}

void BitcoinExchange::parsingcsv( void )
{
    std::ifstream file("data.csv");
    if(!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        std::exit(1);
    }
    std::string line, rate, date, header;
    std::getline(file, header);
    while(std::getline(file, line))
    {
        std::istringstream iss(line);
        if (std::getline(std::getline(iss, date, ','), rate, ','))
            this->_database[date] = std::atof(rate.c_str());
    }
}

bool BitcoinExchange::checkValue(const float n) const
{
    if(n > std::numeric_limits<int>::max() || n > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    else if(n < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    else
        return true;
}

bool BitcoinExchange::checkDate(const std::string date) const
{
    if(date.length() != 11)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    if(date[4] != '-' || date[7] != '-')
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    for(int i = 0; i < 10; ++i)
    {
        if(i != 4 && i != 7 && !isdigit(date[i]))
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return false;
        }
    }
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    bool isbissextile = false;
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        isbissextile = true;
    }
    if(!isbissextile && day > 28 && month == 2)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    else if((month == 2 && day > 29) || (month == 4 && day == 31) || (month == 6 && day == 31) || (month == 9 && day == 31) || (month == 2 && day == 31) )
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    else if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
    return(true);
}

float BitcoinExchange::findKey(std::string date)
{
    date.erase(date.size() - 1);
    for(iterator it = this->_database.begin(); it != this->_database.end(); ++it)
    {
        if(date == it->first)
            return(it->second);
    }
    if(std::atoi(date.substr(0, 4).c_str()) <= 2022 && (std::atoi(date.substr(5, 2).c_str()) <= 3 || std::atoi(date.substr(5, 1).c_str()) <= 3) && (std::atoi(date.substr(8, 2).c_str()) <= 29 || std::atoi(date.substr(8, 1).c_str()) <= 29))
    {
        iterator itlb = this->_database.lower_bound(date);
        return(itlb->second); 
    }
    else
    {
        iterator ite = (this->_database.end());
        ite--;
        return(ite->second);
    }
}

void BitcoinExchange::handleInput(const std::string argv)
{
    std::ifstream file(argv.c_str());
    if(!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    std::string line, header, date, svalue;
    std::getline(file, header);
    if(header != "date | value")
    {
        std::cerr << "header file must be : date | value" << std::endl;
        return;
    }
    while(std::getline(file, line))
    {
        bool serror = false;
        if(line.find('|') == std::string::npos && line.size() != 0)
                std::cout << "Error: bad input => " << line << std::endl;
        std::istringstream iss(line);
        if (std::getline(std::getline(iss, date, '|'), svalue, '|'))
        {
            for(int i = 0; svalue[i]; i++)
            {
                if(!std::isdigit(svalue[i]) && !std::isspace(svalue[i]))
                {
                    std::cout << "Error: bad input => " << svalue << std::endl;
                    serror = true;
                    break;
                }
            }
            if(serror == true)
                continue;
            float value = std::atof(svalue.c_str());
            if(this->checkValue(value) && this->checkDate(date))
            {
                std::cout << date << " => " << value << " = " << value * this->findKey(date) << std::endl;
            }
        }
    }
}