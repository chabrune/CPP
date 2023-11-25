#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if(argc != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return(1);
    }
    BitcoinExchange frr;
    frr.parsingcsv();
    frr.handleoutput(std::string(argv[1]));
}