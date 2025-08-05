#include <iostream>
#include <cmath> 

class Dcircle {
private:
    double radius;

public:
   
    Dcircle() {
        radius = 1.0;
    }

    Dcircle(double r) {
        radius = r;
    }

    void findArea() const {
        double area = M_PI * radius * radius;
        std::cout << "Area of circle: " << area << std::endl;
    }

    void perimeter() const {
        double circ = 2 * M_PI * radius;
        std::cout << "Perimeter (Circumference) of circle: " << circ << std::endl;
    }
};

int main() {
	
    Dcircle tr3;

    tr3.findArea();
    tr3.perimeter();

    return 0;
}
