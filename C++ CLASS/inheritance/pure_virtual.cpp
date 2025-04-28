#include <iostream>
using namespace std;
// Abstract class
class Shape {
protected:
string color;
public:
// Pure virtual function
virtual double area()= 0;
// Normal virtual function
virtual void display(){
cout << "This is a shape with area: " << area() << endl;
}
// Non-virtual function
void setColor(string color) {
this->color = color;
}
};
class Circle : public Shape {
private:
double radius;
public:
Circle(double r) : radius(r) {}
// Implementation of pure virtual function
double area() override { return
3.14159 * radius * radius;
}
// Optional: override display
void display() override {
cout << "Circle with radius " << radius << " and area " << area() << endl;
}
};
class Rectangle : public Shape {
private:
double width, height;
public:
Rectangle(double w, double h) : width(w), height(h) {}
// Implementation of pure virtual function
double area() override { return
width * height;
} 
};
int main() {
// Shape shape; // Error: Cannot instantiate abstract class
Circle circle(5.0);
Rectangle rectangle(4.0, 6.0);
Shape* shapes[2];
shapes[0] = &circle;
shapes[1] = &rectangle;
for (int i = 0; i < 2; i++) {
shapes[i]->display(); // Polymorphic call
}
return 0;
}