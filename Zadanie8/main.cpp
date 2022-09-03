#include"Rectangle.hpp"
#include"RectangleGenerator.hpp"
#include"RectangleManager.hpp"
#include <iostream>

int main()
{
    RectangleManager rectangles(100);
    rectangles.printRectangles();
    rectangles.countRectangleBiggerThen(50);
    rectangles.copyRectangles();
    std::cout << "Hello World!\n";
}
