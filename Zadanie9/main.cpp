

#include <iostream>
#include"CaesarCipher.hpp"

int main()
{
    try
    {
    CaesarCipher cipher;
    std::cout << cipher.cypher("motyl", 4) << std::endl;
    std::cout << cipher.decypher("qsxcp", 4) << std::endl;
    std::cout << cipher.cypher("!@vwxyz", 4) << std::endl;
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << error.what() << std::endl;
    }
}

