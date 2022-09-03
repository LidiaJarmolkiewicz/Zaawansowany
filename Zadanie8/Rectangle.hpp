#pragma once
class Rectangle
{public:
	Rectangle(int a, int b):_a(a),_b(b){};
	int countArea();
	int getSideA();
	int getSideB();
	int getArea();
	bool isSquare();

private:
	int _a = 0;
	int _b = 0;
	
};

