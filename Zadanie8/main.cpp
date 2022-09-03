#include"Rectangle.hpp"
#include"RectangleGenerator.hpp"
#include"RectangleManager.hpp"
#include <iostream>

int main()
{
    RectangleManager rectangles(100);
    rectangles.printRectangles();
    std::cout << "_____" << std::endl;
    rectangles.countRectangleBiggerThen(50);
    std::cout << "_____" << std::endl;
    rectangles.copyRectangles();
    rectangles.printRectangles();
    std::cout << "_____" << std::endl;

    std::cout << "Hello World!\n";
}
