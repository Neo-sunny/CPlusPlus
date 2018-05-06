#include <iostream>
using namespace std;

class Rectangle {
private:
    double h, l;
public:
    Rectangle() = default;
    Rectangle(double h1, double l1)
      : h(h1*2.0), l(l1*3.0)
    { }
    Rectangle(Rectangle const& autre)
      : h(autre.h/2.0), l(autre.l/3.0)
    { }
    void display(){std::cout << h << ", " << l << std::endl;}
};

int main()
{
    Rectangle r1(2.0, 4.0),  r2(r1);// In r2 pointer to r2 is passed
    r1.display();
    r2.display();
    return 0;
}
