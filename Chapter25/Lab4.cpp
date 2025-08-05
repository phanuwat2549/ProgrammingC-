#include <iostream>
#include <cmath>

class Base_class {
	public:
	int width, length;
	int depth;
	
	void findArea() {
		std::cout << "findArea() in Base class" << std::endl;
	}
	void perimeter() {
		std::cout << "perimeter() in Base class" << std::endl;
	}
};

class Rectangle : public Base_class {
	public:	
	Rectangle(){
		width = 5; length = 10;
	}
	void findArea(){
		std::cout << "Area of rectangle is " << (width * length) << std::endl;
	}
	void perimeter(){
		std::cout << "Perimeter of rectangle is " << (2*(width+length)) << std::endl;
	}
};
class DRectangle : public Rectangle {
	public:	
	DRectangle(){
		width = 10; length = 2; depth = 3;
	}
	void findArea() {
		std::cout << "Area of 3D Rectangle is " << (0.5 * width * length * depth) << std::endl;
	}
};
int main() {
	Rectangle rec;
	rec.findArea();
	rec.perimeter();
	
	DRectangle tr3;
	tr3.findArea();
	tr3.perimeter();

	
    return 0 ;
}
