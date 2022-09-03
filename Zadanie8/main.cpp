#include"Rectangle.hpp"
#include"RectangleGenerator.hpp"
#include"RectangleManager.hpp"
#include <iostream>

int main()
{
    RectangleManager rectangles(100);
    rectangles.printRectangles();
    std::cout << "_____ "<< std::endl;
    rectangles.countRectangleBiggerThen(50);
    std::cout << "_____ ile jest kwadratow"  <<std::endl;
    rectangles.copyRectangles();
   
    std::cout << "_____pola malejaco" <<std::endl;
    rectangles.sortAreaDescending();
  
    std::cout << "_____ prostokaty bez zera"  <<  std::endl;
    rectangles.deleteInvalid();
}
