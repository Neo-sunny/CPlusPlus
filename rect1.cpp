#include <iostream>
using namespace std;

class Rectangle{
public:
	Rectangle(double h, double l)
		: height(h), width(l)
		{}
	double surface() const {
		return height*width;		}
		// accesor and mutator
		//....
		
private:
double height;
double width;			
	};
