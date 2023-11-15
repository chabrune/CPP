#include "Serializer.hpp"

struct Data
{
    int i;
    char c;
    std::string s;
};

int main(void)
{
    Data yolo;
    yolo.i = 15;
    yolo.c = 'a';
    yolo.s = "Yolo banzai";
    std::cout << &yolo << std::endl;
    uintptr_t raw = Serializer::serialize(&yolo);
    Data *oloy = Serializer::deserialize(raw);
    std::cout << oloy << std::endl;
    std::cout << oloy->i << " " << oloy->c << " " << oloy->s << std::endl;
}