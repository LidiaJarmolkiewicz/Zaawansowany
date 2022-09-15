#include "GenerateThrow.hpp"
#include<random>

char GenerateThrow::generateThrow()
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<char> distr('O', 'R');
    return distr(eng);
}

